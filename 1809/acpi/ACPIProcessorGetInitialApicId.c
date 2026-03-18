/*
 * XREFs of ACPIProcessorGetInitialApicId @ 0x1C008EB78
 * Callers:
 *     ACPIProcessorStartDevice @ 0x1C000CDE0 (ACPIProcessorStartDevice.c)
 * Callees:
 *     ACPIGet @ 0x1C0003980 (ACPIGet.c)
 *     AMLIGetNSObjectType @ 0x1C000C844 (AMLIGetNSObjectType.c)
 *     WPP_RECORDER_SF_Dqss @ 0x1C001D498 (WPP_RECORDER_SF_Dqss.c)
 */

__int64 __fastcall ACPIProcessorGetInitialApicId(__int64 a1, int *a2)
{
  unsigned int v2; // ebx
  int v4; // r15d
  char v6; // bp
  __int64 v7; // rdx
  PVOID v8; // rdx
  __int64 v9; // rcx
  const char *v10; // rax
  const char *v11; // rdx
  char *v12; // r14
  char v13; // r9
  char *v14; // r11
  char *v15; // r12
  char *v16; // rdx
  unsigned __int8 v17; // cl
  char *v18; // r10
  char v19; // al
  __int64 v20; // rdx
  __int64 v21; // rcx
  int v22; // eax
  int v23; // ecx
  __int64 v25; // r8
  __int64 v26; // rdx
  __int64 v27; // r8
  __int64 v28; // rcx
  unsigned int v29; // r8d
  unsigned int v30; // [rsp+90h] [rbp+8h] BYREF
  PVOID P; // [rsp+98h] [rbp+10h] BYREF

  v2 = 0;
  P = 0LL;
  *a2 = -1;
  v4 = *(_DWORD *)(a1 + 196);
  v6 = 1;
  v30 = 0;
  if ( (int)ACPIGet((__int64 *)a1, 1413565791, 268501000, 0LL, 0, 0LL, 0LL, (__int64)&P, (__int64)&v30) >= 0 )
  {
    v8 = P;
  }
  else
  {
    v7 = *((_QWORD *)AcpiInformation + 4);
    if ( !v7 )
      return 3221225473LL;
    v8 = (PVOID)(v7 + 44);
    v6 = 0;
    P = v8;
    v30 = *(_DWORD *)(*((_QWORD *)AcpiInformation + 4) + 4LL) - 44;
  }
  if ( !v8 )
    return 3221225473LL;
  v9 = *(_QWORD *)(a1 + 8);
  v10 = byte_1C006E28A;
  v11 = byte_1C006E28A;
  if ( (v9 & 0x200000000000LL) != 0 )
  {
    v10 = *(const char **)(a1 + 560);
    if ( (v9 & 0x400000000000LL) != 0 )
      v11 = *(const char **)(a1 + 568);
  }
  WPP_RECORDER_SF_Dqss(
    (__int64)WPP_GLOBAL_Control->DeviceExtension,
    4u,
    1u,
    0xBu,
    (__int64)&WPP_72dd1c1115013f02fe06a3c7ab98b878_Traceguids,
    v4,
    a1,
    v10,
    v11);
  v12 = (char *)P;
  v13 = 0;
  v14 = (char *)P + v30;
  v15 = (char *)P + 2;
  while ( 1 )
  {
    v16 = v12;
    if ( v15 <= v14 )
    {
      do
      {
        v17 = v16[1];
        if ( v17 < 2u )
          break;
        v18 = &v16[v17];
        if ( v18 > v14 )
          break;
        v19 = *v16;
        if ( *v16 )
        {
          if ( v19 == 9 )
          {
            if ( v17 >= 0x10u
              && ((unsigned int)AMLIGetNSObjectType(*(_QWORD *)(a1 + 712)) == 6
               && (v27 & *(_QWORD *)(a1 + 8)) != 0
               && *(_DWORD *)(v26 + 12) == v4
               || v6 && v13) )
            {
              goto LABEL_41;
            }
          }
          else if ( v19 == 11
                 && v17 >= 0x28u
                 && ((unsigned int)IrqLibGicVersion < 3 || v17 >= 0x4Cu)
                 && (((unsigned int)AMLIGetNSObjectType(*(_QWORD *)(a1 + 712)) == 6
                   && (*(_QWORD *)(a1 + 8) & 0x1000000000LL) != 0
                   || (unsigned int)AMLIGetNSObjectType(v28) == 12)
                  && *(_DWORD *)(v26 + 8) == v4
                  || v6 && v13) )
          {
            if ( v29 < 3 )
LABEL_41:
              v22 = *(_DWORD *)(v26 + 4);
            else
              v22 = (*(_QWORD *)(v26 + 68) >> 8) ^ (*(_QWORD *)(v26 + 68) ^ (*(_QWORD *)(v26 + 68) >> 8)) & 0xFFFFFF;
LABEL_20:
            *a2 = v22;
            break;
          }
        }
        else if ( v17 >= 8u
               && (((unsigned int)AMLIGetNSObjectType(*(_QWORD *)(a1 + 712)) == 12
                 || (unsigned int)AMLIGetNSObjectType(v21) == 6 && (v25 & *(_QWORD *)(a1 + 8)) != 0)
                && *(unsigned __int8 *)(v20 + 2) == v4
                || v6 && v13) )
        {
          v22 = *(unsigned __int8 *)(v20 + 3);
          goto LABEL_20;
        }
        v16 = v18;
      }
      while ( v18 + 2 <= v14 );
    }
    v23 = *a2;
    if ( *a2 != -1 )
      break;
    if ( !v6 )
      goto LABEL_24;
    if ( v13 )
      break;
    v13 = 1;
  }
  if ( v6 )
  {
    ExFreePoolWithTag(v12, 0);
    v23 = *a2;
  }
LABEL_24:
  if ( v23 == -1 )
    return (unsigned int)-1073741823;
  return v2;
}
