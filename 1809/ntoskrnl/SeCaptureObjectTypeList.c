/*
 * XREFs of SeCaptureObjectTypeList @ 0x1400AA604
 * Callers:
 *     SeAccessCheckByTypeWithAdminlessChecks @ 0x1400A93B0 (SeAccessCheckByTypeWithAdminlessChecks.c)
 *     SepAccessCheckAndAuditAlarmWithAdminlessChecks @ 0x1405BB530 (SepAccessCheckAndAuditAlarmWithAdminlessChecks.c)
 * Callees:
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 *     ExAllocatePoolWithTag @ 0x14034C010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x14034CC60 (ExFreePoolWithTag.c)
 *     ExRaiseDatatypeMisalignment @ 0x1408D7880 (ExRaiseDatatypeMisalignment.c)
 */

__int64 __fastcall SeCaptureObjectTypeList(unsigned __int64 a1, unsigned int a2, char a3, _QWORD *a4)
{
  int v7; // ebx
  _WORD *PoolWithTag; // r10
  __int64 v9; // rax
  _WORD *v10; // r13
  unsigned int v11; // edx
  __int64 v12; // r9
  unsigned __int16 v13; // r8
  __int64 v14; // rcx
  _OWORD *v15; // rdx
  unsigned int v16; // r11d
  __int64 v17; // r9
  int v19; // [rsp+24h] [rbp-74h]
  _WORD *v20; // [rsp+28h] [rbp-70h]
  _QWORD v21[4]; // [rsp+30h] [rbp-68h]

  HIDWORD(v21[0]) = HIDWORD(a4);
  v7 = 0;
  PoolWithTag = 0LL;
  *a4 = 0LL;
  if ( a3 != 1 )
    return 3221225474LL;
  if ( a2 )
  {
    if ( a1 )
    {
      v9 = 16LL * a2;
      if ( v9 )
      {
        if ( (a1 & 3) != 0 )
          ExRaiseDatatypeMisalignment();
        if ( v9 + a1 > 0x7FFFFFFF0000LL || v9 + a1 < a1 )
          MEMORY[0x7FFFFFFF0000] = 0;
      }
      PoolWithTag = ExAllocatePoolWithTag(PagedPool, 48LL * a2, 0x744F6553u);
      v20 = PoolWithTag;
      v10 = PoolWithTag;
      if ( PoolWithTag )
      {
        v11 = 0;
        v19 = 0;
        while ( v11 < a2 )
        {
          v12 = v11;
          v13 = *(_WORD *)(a1 + 16LL * v11);
          if ( v13 > 4u )
            goto LABEL_17;
          v14 = 6LL * v11;
          PoolWithTag[4 * v14] = v13;
          PoolWithTag[4 * v14 + 1] = 0;
          v15 = *(_OWORD **)(a1 + 16LL * v11 + 8);
          if ( ((unsigned __int8)v15 & 3) != 0 )
            ExRaiseDatatypeMisalignment();
          *(_OWORD *)&PoolWithTag[24 * v12 + 2] = *v15;
          *(_QWORD *)&PoolWithTag[24 * v12 + 12] = 0LL;
          *(_DWORD *)&PoolWithTag[24 * v12 + 16] = 0;
          *(_QWORD *)&PoolWithTag[24 * v12 + 20] = 0LL;
          if ( v19 )
          {
            v16 = v13;
            PoolWithTag = v20;
            if ( v13 > (unsigned int)(unsigned __int16)v20[24 * (v19 - 1)] + 1 || !v13 )
              goto LABEL_17;
          }
          else
          {
            if ( v13 )
            {
              v7 = -1073741811;
              PoolWithTag = v20;
              break;
            }
            v16 = 0;
            PoolWithTag = v20;
          }
          v17 = 6 * v12;
          if ( v13 )
            *(_DWORD *)&v10[4 * v17 + 10] = *((_DWORD *)v21 + v16 + 1);
          else
            *(_DWORD *)&v10[4 * v17 + 10] = -1;
          *((_DWORD *)&v21[1] + v13) = v19;
          v11 = ++v19;
          v7 = 0;
        }
      }
      else
      {
        v7 = -1073741670;
      }
    }
    else
    {
LABEL_17:
      v7 = -1073741811;
    }
  }
  if ( v7 < 0 )
  {
    if ( PoolWithTag )
      ExFreePoolWithTag(PoolWithTag, 0);
  }
  else
  {
    *a4 = PoolWithTag;
  }
  return (unsigned int)v7;
}
