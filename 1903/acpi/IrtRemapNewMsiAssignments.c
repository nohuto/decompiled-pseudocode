/*
 * XREFs of IrtRemapNewMsiAssignments @ 0x1C009BCD0
 * Callers:
 *     IrqArbCommitAllocation @ 0x1C0099C90 (IrqArbCommitAllocation.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0031700 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C00319E0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0031D40 (memset.c)
 *     PcisuppGetBusSlotNumber @ 0x1C009BE04 (PcisuppGetBusSlotNumber.c)
 */

__int64 __fastcall IrtRemapNewMsiAssignments(__int64 a1)
{
  struct _RTL_RANGE_LIST *v2; // rcx
  _DWORD *UserData; // rbx
  int v4; // eax
  __int64 v5; // r9
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 result; // rax
  char v9; // [rsp+40h] [rbp+7h] BYREF
  unsigned int v10; // [rsp+44h] [rbp+Bh] BYREF
  unsigned int v11; // [rsp+48h] [rbp+Fh] BYREF
  PRTL_RANGE Range; // [rsp+50h] [rbp+17h] BYREF
  struct _RANGE_LIST_ITERATOR Iterator; // [rsp+58h] [rbp+1Fh] BYREF
  __int64 v14; // [rsp+78h] [rbp+3Fh] BYREF
  int v15; // [rsp+80h] [rbp+47h]

  v14 = 0LL;
  v15 = 0;
  memset(&Iterator, 0, sizeof(Iterator));
  v2 = *(struct _RTL_RANGE_LIST **)(a1 + 48);
  v10 = 0;
  RtlGetFirstRange(v2, &Iterator, &Range);
  while ( Range )
  {
    if ( Range->Owner )
    {
      if ( (Range->Attributes & 1) == 0 )
      {
        UserData = Range->UserData;
        if ( UserData )
        {
          v4 = UserData[1];
          if ( (v4 & 4) != 0 && UserData[2] == 3 )
          {
            UserData[1] = v4 & 0xFFFFFFFB;
            if ( (int)PcisuppGetBusSlotNumber(
                        Range->Owner,
                        (unsigned int)&v11,
                        (unsigned int)&v10,
                        (unsigned int)&v9,
                        (__int64)&v14) < 0 )
            {
              v7 = 0LL;
              v6 = 0LL;
              LOBYTE(v5) = 0;
              v11 = 0;
              v10 = 0;
              v14 = 0LL;
              v15 = 0;
              v9 = 0;
            }
            else
            {
              v6 = v10;
              LOBYTE(v5) = v9;
              v7 = v11;
            }
            result = ((__int64 (__fastcall *)(__int64, __int64, __int64 *, __int64, _DWORD *, _DWORD))HalPrivateDispatchTable[64])(
                       v7,
                       v6,
                       &v14,
                       v5,
                       UserData + 8,
                       *((unsigned __int8 *)UserData + 26));
            if ( (int)result < 0 )
              return result;
          }
        }
      }
    }
    RtlGetNextRange(&Iterator, &Range, 1u);
  }
  return 0LL;
}
