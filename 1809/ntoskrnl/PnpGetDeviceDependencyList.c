/*
 * XREFs of PnpGetDeviceDependencyList @ 0x1408254F0
 * Callers:
 *     PiControlGetPropertyData @ 0x1405884A0 (PiControlGetPropertyData.c)
 * Callees:
 *     RtlStringCchLengthW @ 0x14000733C (RtlStringCchLengthW.c)
 *     ExReleaseResourceLite @ 0x14004F590 (ExReleaseResourceLite.c)
 *     RtlStringCchCopyExW @ 0x14013DE50 (RtlStringCchCopyExW.c)
 *     PiListEntryToDependencyEdge @ 0x140287AA0 (PiListEntryToDependencyEdge.c)
 *     PnpUnicodeStringToWstrFree @ 0x1405990AC (PnpUnicodeStringToWstrFree.c)
 *     PnpUnicodeStringToWstr @ 0x14059ACA8 (PnpUnicodeStringToWstr.c)
 *     PpDevNodeUnlockTree @ 0x14059CEB4 (PpDevNodeUnlockTree.c)
 *     PnpAcquireDependencyRelationsLock @ 0x14059E8F4 (PnpAcquireDependencyRelationsLock.c)
 *     PiGetProviderList @ 0x1406E7EC0 (PiGetProviderList.c)
 *     PiGetDependentList @ 0x1406EC8C4 (PiGetDependentList.c)
 */

__int64 __fastcall PnpGetDeviceDependencyList(__int64 a1, int a2, wchar_t *a3, unsigned int a4, _DWORD *a5)
{
  __int64 v5; // r15
  wchar_t *v6; // r13
  int v7; // r12d
  size_t v8; // rdi
  int v9; // esi
  int v10; // ebx
  wchar_t *v11; // r14
  __int64 *DependentList; // rax
  wchar_t v13; // dx
  __int64 *v14; // r15
  __int64 v15; // rax
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // r11
  const wchar_t *v19; // rcx
  __int64 v20; // r11
  unsigned __int16 *v21; // r13
  unsigned __int16 *v22; // r12
  unsigned __int16 *v23; // rax
  wchar_t *v24; // r15
  NTSTRSAFE_PWSTR ppszDestEnd; // [rsp+30h] [rbp-48h] BYREF
  size_t pcchLength; // [rsp+38h] [rbp-40h] BYREF
  __int64 *v28; // [rsp+40h] [rbp-38h]
  STRSAFE_PCNZWCH psz; // [rsp+48h] [rbp-30h] BYREF
  unsigned __int16 *v30; // [rsp+50h] [rbp-28h]
  __int64 *v31; // [rsp+58h] [rbp-20h]
  _QWORD *v32; // [rsp+60h] [rbp-18h]
  size_t pcchRemaining; // [rsp+C0h] [rbp+48h] BYREF
  int v34; // [rsp+C8h] [rbp+50h]
  wchar_t *v35; // [rsp+D0h] [rbp+58h]
  unsigned int v36; // [rsp+D8h] [rbp+60h]

  v36 = a4;
  v35 = a3;
  v34 = a2;
  v5 = *(_QWORD *)(a1 + 32);
  v6 = a3;
  pcchRemaining = a4;
  v7 = a2;
  v8 = a4;
  psz = 0LL;
  v9 = 0;
  v10 = 0;
  ppszDestEnd = a3;
  v11 = a3;
  PnpAcquireDependencyRelationsLock(0);
  if ( v7 )
  {
    if ( v7 != 1 )
    {
      v10 = -1073741811;
      goto LABEL_39;
    }
    DependentList = PiGetDependentList(v5);
  }
  else
  {
    DependentList = PiGetProviderList(v5);
  }
  v14 = (__int64 *)*DependentList;
  v31 = DependentList;
  if ( v14 == DependentList )
    goto LABEL_35;
  do
  {
    v15 = PiListEntryToDependencyEdge((__int64)v14, v7);
    v14 = (__int64 *)*v14;
    v28 = v14;
    if ( v7 )
      v16 = *(_QWORD *)(v15 + 40);
    else
      v16 = *(_QWORD *)(v15 + 32);
    v17 = *(_QWORD *)(v16 + 48);
    if ( v17 )
      v18 = *(_QWORD *)(*(_QWORD *)(v17 + 312) + 40LL);
    else
      v18 = 0LL;
    if ( v17 && v18 && (v19 = *(const wchar_t **)(v18 + 48)) != 0LL )
    {
      v10 = RtlStringCchLengthW(v19, 0xC8uLL, &pcchLength);
      if ( v10 < 0 )
        goto LABEL_39;
      v9 += ++pcchLength;
      if ( pcchLength <= v8 )
      {
        v10 = RtlStringCchCopyExW(v11, v8, *(NTSTRSAFE_PCWSTR *)(v20 + 48), &ppszDestEnd, &pcchRemaining, 0x800u);
        if ( v10 < 0 )
          goto LABEL_39;
        v11 = ppszDestEnd + 1;
        v8 = pcchRemaining - 1;
        ++ppszDestEnd;
        --pcchRemaining;
      }
    }
    else
    {
      v21 = (unsigned __int16 *)(v16 + 56);
      v22 = *(unsigned __int16 **)(v16 + 56);
      if ( v22 != (unsigned __int16 *)(v16 + 56) )
      {
        while ( 1 )
        {
          v23 = v22;
          v22 = *(unsigned __int16 **)v22;
          v30 = v23;
          v32 = v23 + 8;
          v10 = PnpUnicodeStringToWstr((__int16 **)&psz, 0LL, v23 + 8);
          if ( v10 < 0 )
            goto LABEL_39;
          v24 = (wchar_t *)psz;
          v10 = RtlStringCchLengthW(psz, 0x7FFFuLL, &pcchLength);
          if ( v10 < 0 )
            break;
          v9 += ++pcchLength;
          if ( pcchLength <= v8 )
          {
            v10 = RtlStringCchCopyExW(v11, v8, v24, &ppszDestEnd, &pcchRemaining, 0x800u);
            if ( v10 < 0 )
            {
              PnpUnicodeStringToWstrFree(v24, (__int64)(v30 + 8));
              v8 = pcchRemaining;
              v11 = ppszDestEnd;
LABEL_29:
              v14 = v28;
              goto LABEL_30;
            }
            v11 = ppszDestEnd + 1;
            v8 = pcchRemaining - 1;
            ++ppszDestEnd;
            --pcchRemaining;
          }
          PnpUnicodeStringToWstrFree(v24, (__int64)v32);
          if ( v22 == v21 )
            goto LABEL_29;
        }
        PnpUnicodeStringToWstrFree(v24, (__int64)(v30 + 8));
        goto LABEL_29;
      }
LABEL_30:
      if ( v10 < 0 )
        goto LABEL_39;
      v7 = v34;
    }
  }
  while ( v14 != v31 );
  if ( v10 >= 0 )
  {
    v6 = v35;
    v13 = 0;
LABEL_35:
    if ( ++v9 <= v36 )
      v6[v9 - 1] = v13;
    else
      v10 = -1073741789;
  }
LABEL_39:
  ExReleaseResourceLite(&PiDependencyRelationsLock);
  PpDevNodeUnlockTree(0);
  if ( (int)(v10 + 0x80000000) < 0 || v10 == -1073741789 )
  {
    if ( a5 )
      *a5 = v9;
  }
  return (unsigned int)v10;
}
