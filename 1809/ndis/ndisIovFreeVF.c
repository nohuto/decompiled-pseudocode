/*
 * XREFs of ndisIovFreeVF @ 0x1C00700E0
 * Callers:
 *     ndisOidPostIovFreeVF @ 0x1C0070CE0 (ndisOidPostIovFreeVF.c)
 * Callees:
 *     WPP_SF_qq @ 0x1C003A868 (WPP_SF_qq.c)
 *     WPP_SF_qqd @ 0x1C003A90C (WPP_SF_qqd.c)
 */

__int64 __fastcall ndisIovFreeVF(_DWORD *P)
{
  unsigned int v1; // ebx
  _DWORD *v2; // rdi
  __int64 v3; // rsi
  __int64 v4; // rbp
  __int64 v5; // r14
  KIRQL v6; // r9
  _QWORD *v7; // rcx
  PVOID *v8; // rax
  _DWORD **v9; // rdx
  PVOID *v10; // rcx
  _QWORD *v11; // rdx
  PVOID *v12; // r8
  unsigned int v14; // [rsp+20h] [rbp-28h]

  v1 = 0;
  v2 = P;
  v3 = 0LL;
  if ( (unsigned __int8)byte_1C00A0269 >= 4u )
    WPP_SF_qq(0x25u, &WPP_045c459e6c3833fc2a6b90252fda9676_Traceguids, 0LL, P);
  if ( v2[19] )
  {
    v1 = -1073741811;
    goto LABEL_16;
  }
  v3 = *((_QWORD *)v2 + 6);
  v4 = *((_QWORD *)v2 + 7);
  v5 = *((_QWORD *)v2 + 8);
  v6 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v3 + 96));
  *(_QWORD *)(v3 + 520) = KeGetCurrentThread();
  *(_DWORD *)(v3 + 1864) = 2886766;
  v7 = *(_QWORD **)v2;
  if ( *(_DWORD **)(*(_QWORD *)v2 + 8LL) != v2 )
    goto LABEL_19;
  v8 = (PVOID *)*((_QWORD *)v2 + 1);
  if ( *v8 != v2 )
    goto LABEL_19;
  *v8 = v7;
  v7[1] = v8;
  --*(_DWORD *)(v3 + 4752);
  if ( v4 )
  {
    v9 = (_DWORD **)*((_QWORD *)v2 + 2);
    if ( v9[1] != v2 + 4 )
      goto LABEL_19;
    v10 = (PVOID *)*((_QWORD *)v2 + 3);
    if ( *v10 != v2 + 4 )
      goto LABEL_19;
    *v10 = v9;
    v9[1] = v10;
    --*(_DWORD *)(v4 + 800);
  }
  if ( v5 )
  {
    v11 = (_QWORD *)*((_QWORD *)v2 + 4);
    if ( (_DWORD *)v11[1] == v2 + 8 )
    {
      v12 = (PVOID *)*((_QWORD *)v2 + 5);
      if ( *v12 == v2 + 8 )
      {
        *v12 = v11;
        v11[1] = v12;
        --*(_DWORD *)(v5 + 72);
        goto LABEL_15;
      }
    }
LABEL_19:
    __fastfail(3u);
  }
LABEL_15:
  *(_QWORD *)(v3 + 520) = 0LL;
  *(_DWORD *)(v3 + 1864) = 0;
  KeReleaseSpinLock((PKSPIN_LOCK)(v3 + 96), v6);
  ExFreePoolWithTag(v2, 0);
  v2 = 0LL;
LABEL_16:
  if ( (unsigned __int8)byte_1C00A0269 >= 4u )
  {
    v14 = v1;
    WPP_SF_qqd(0x26u, &WPP_045c459e6c3833fc2a6b90252fda9676_Traceguids, v3, v2, v14);
  }
  return v1;
}
