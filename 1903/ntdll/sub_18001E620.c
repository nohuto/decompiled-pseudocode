/*
 * XREFs of sub_18001E620 @ 0x18001E620
 * Callers:
 *     sub_18001B784 @ 0x18001B784 (sub_18001B784.c)
 *     sub_18001B990 @ 0x18001B990 (sub_18001B990.c)
 *     sub_18001C610 @ 0x18001C610 (sub_18001C610.c)
 *     RtlLookupFunctionEntry @ 0x18001E290 (RtlLookupFunctionEntry.c)
 *     RtlPcToFileHeader @ 0x18001F400 (RtlPcToFileHeader.c)
 *     sub_1800202C0 @ 0x1800202C0 (sub_1800202C0.c)
 *     RtlQueueWorkItem @ 0x18002F7D0 (RtlQueueWorkItem.c)
 *     RtlQueryInformationActivationContext @ 0x1800376A0 (RtlQueryInformationActivationContext.c)
 *     sub_180072FEC @ 0x180072FEC (sub_180072FEC.c)
 *     RtlGuardCheckLongJumpTarget @ 0x180078390 (RtlGuardCheckLongJumpTarget.c)
 *     RtlLookupFunctionTable @ 0x18009BCC0 (RtlLookupFunctionTable.c)
 *     sub_1800DFBC4 @ 0x1800DFBC4 (sub_1800DFBC4.c)
 *     sub_18010E004 @ 0x18010E004 (sub_18010E004.c)
 * Callees:
 *     sub_18001C4DC @ 0x18001C4DC (sub_18001C4DC.c)
 *     sub_18001E9BC @ 0x18001E9BC (sub_18001E9BC.c)
 *     sub_180035E30 @ 0x180035E30 (sub_180035E30.c)
 *     sub_1800365A0 @ 0x1800365A0 (sub_1800365A0.c)
 *     sub_180036790 @ 0x180036790 (sub_180036790.c)
 *     sub_180077EA8 @ 0x180077EA8 (sub_180077EA8.c)
 *     ZwTerminateProcess @ 0x18009CC60 (ZwTerminateProcess.c)
 *     ZwWaitForAlertByThreadId @ 0x1800A0010 (ZwWaitForAlertByThreadId.c)
 *     RtlRaiseStatus @ 0x1800FBD30 (RtlRaiseStatus.c)
 */

__int64 __fastcall sub_18001E620(unsigned __int64 BaseAddress, signed __int64 a2, char *a3, char *a4)
{
  signed __int64 v4; // r14
  bool v5; // zf
  PVOID v6; // rsi
  __int64 v7; // rbp
  __int64 v8; // r13
  unsigned __int64 Ptr; // rdi
  int v10; // r9d
  int v11; // r8d
  int v12; // eax
  unsigned __int64 v13; // rbx
  char *v14; // rdx
  signed __int64 v15; // rax
  unsigned __int64 v17; // rax
  signed __int64 v18; // rbx
  signed __int64 v19; // rtt
  __int64 v20; // rdx
  signed __int64 v21; // rcx
  signed __int64 v22; // rdx
  signed __int64 v23; // rtt
  __int64 v24; // rbx
  signed __int64 v25; // rcx
  signed __int64 v26; // rax
  unsigned __int64 v28; // rax
  _QWORD *v29; // rcx
  __int64 i; // rdx
  __int64 v31; // [rsp+20h] [rbp-78h]
  unsigned __int64 v32; // [rsp+30h] [rbp-68h] BYREF
  unsigned __int64 *v33; // [rsp+38h] [rbp-60h]
  __int64 v34; // [rsp+40h] [rbp-58h]
  unsigned __int64 v35; // [rsp+48h] [rbp-50h]
  int v36; // [rsp+50h] [rbp-48h]
  signed __int32 v37[17]; // [rsp+54h] [rbp-44h] BYREF
  int v38; // [rsp+A8h] [rbp+10h] BYREF
  __int64 v39; // [rsp+B0h] [rbp+18h] BYREF

  v4 = a2;
  v5 = dword_1801664E0 == 3;
  v6 = (PVOID)BaseAddress;
  v7 = 0LL;
  *(_QWORD *)(a2 + 8) = 0LL;
  *(_DWORD *)(a2 + 16) = 0;
  if ( v5 )
  {
    v8 = -1LL;
    v38 = 0;
    Ptr = _InterlockedCompareExchange64((volatile signed __int64 *)&Address, 17LL, 0LL);
    if ( !Ptr )
    {
LABEL_3:
      if ( KiUserInvertedFunctionTable != 1 )
      {
        v10 = 1;
        v11 = KiUserInvertedFunctionTable - 1;
        while ( v11 >= v10 )
        {
          v12 = (v11 + v10) >> 1;
          v13 = *((_QWORD *)&xmmword_18017A4E0 + 3 * v12 + 1);
          v14 = (char *)&xmmword_18017A4E0 + 24 * v12;
          if ( (unsigned __int64)v6 < v13 )
          {
            if ( !v12 )
              break;
            v11 = v12 - 1;
          }
          else
          {
            if ( (unsigned __int64)v6 < v13 + *((unsigned int *)v14 + 4) )
            {
              *(_OWORD *)v4 = *(_OWORD *)v14;
              *(_QWORD *)(v4 + 16) = *((_QWORD *)v14 + 2);
              v7 = *(_QWORD *)v4;
              break;
            }
            v10 = v12 + 1;
          }
        }
      }
      v15 = _InterlockedCompareExchange64((volatile signed __int64 *)&Address, 0LL, 17LL);
      if ( v15 != 17 )
      {
        if ( (v15 & 1) == 0 )
          RtlRaiseStatus(-1073741212);
        if ( (v15 & 2) != 0 )
        {
LABEL_25:
          if ( (v15 & 8) != 0 )
          {
            v29 = (_QWORD *)(v15 & 0xFFFFFFFFFFFFFFF0uLL);
            for ( i = *(_QWORD *)((v15 & 0xFFFFFFFFFFFFFFF0uLL) + 8); !i; i = v29[1] )
              v29 = (_QWORD *)*v29;
            if ( _InterlockedExchangeAdd((volatile signed __int32 *)(i + 32), 0xFFFFFFFF) > 1 )
              goto LABEL_14;
            v8 = -9LL;
          }
          do
          {
            v20 = v8 + 4;
            v21 = v15 & 6;
            if ( v21 != 2 )
              v20 = v8;
            v22 = v15 + v20;
            v23 = v15;
            v15 = _InterlockedCompareExchange64((volatile signed __int64 *)&Address, v22, v15);
          }
          while ( v23 != v15 );
          if ( v21 == 2 )
            sub_180035E30(&Address, v22, 0LL);
          goto LABEL_14;
        }
        while ( 1 )
        {
          v18 = 0LL;
          if ( (v15 & 0xFFFFFFFFFFFFFFF0uLL) != 0x10 )
            v18 = v15 - 16;
          v19 = v15;
          v15 = _InterlockedCompareExchange64((volatile signed __int64 *)&Address, v18, v15);
          if ( v19 == v15 )
            break;
          if ( (v15 & 2) != 0 )
            goto LABEL_25;
        }
      }
LABEL_14:
      if ( v7 || !byte_18017A4DC && SLOBYTE(NtCurrentPeb()->CrossProcessFlags) >= 0 )
        return v7;
      goto LABEL_16;
    }
    while ( 1 )
    {
      v24 = (Ptr >> 1) & 1;
      if ( (Ptr & 1) != 0 && (v24 || (Ptr & 0xFFFFFFFFFFFFFFF0uLL) == 0) )
      {
        if ( (unsigned __int8)sub_180036790(BaseAddress, a2, a3, a4, v31) )
          ZwTerminateProcess((HANDLE)0xFFFFFFFFFFFFFFFFLL, -1073741749);
        BaseAddress = (unsigned __int64)NtCurrentTeb()->ClientId.UniqueThread;
        v35 = BaseAddress;
        LOBYTE(BaseAddress) = 0;
        v37[0] = 2;
        v34 = 0LL;
        if ( v24 )
        {
          v33 = 0LL;
          v36 = -1;
          BaseAddress = (unsigned __int8)Ptr;
          v32 = Ptr & 0xFFFFFFFFFFFFFFF0uLL;
          a2 = (unsigned __int64)&v32 | Ptr & 8 | 7;
          LOBYTE(BaseAddress) = (Ptr & 4) == 0;
        }
        else
        {
          v36 = -2;
          v33 = &v32;
          a2 = (signed __int64)&v32 + 3;
        }
        v26 = _InterlockedCompareExchange64((volatile signed __int64 *)&Address, a2, Ptr);
        v5 = Ptr == v26;
        Ptr = v26;
        if ( !v5 )
          goto LABEL_46;
        if ( (_BYTE)BaseAddress )
          sub_180077EA8(&Address);
        if ( MEMORY[0x7FFE036A] > 1u )
        {
          if ( MEMORY[0x7FFE0297] )
          {
            a3 = (char *)__rdtsc();
            a4 = &a3[dword_180163EC4];
            while ( 1 )
            {
              BaseAddress = 0LL;
              a2 = 0LL;
              __asm { monitorx rax, rcx, rdx }
              if ( (v37[0] & 2) == 0 )
                break;
              BaseAddress = (unsigned __int64)a3;
              v28 = __rdtsc();
              a2 = (unsigned __int64)HIDWORD(v28) << 32;
              a3 = (char *)v28;
              if ( v28 <= BaseAddress || v28 >= (unsigned __int64)a4 )
                break;
              __asm { mwaitx  rax, rcx, rbx }
            }
          }
          else
          {
            BaseAddress = 0LL;
            a2 = dword_180163EC4 / (unsigned int)MEMORY[0x7FFE02D6];
            while ( (v37[0] & 2) != 0 && (_DWORD)BaseAddress != (_DWORD)a2 )
            {
              _mm_pause();
              BaseAddress = (unsigned int)(BaseAddress + 1);
            }
          }
        }
        if ( _interlockedbittestandreset(v37, 1u) )
        {
          do
            ZwWaitForAlertByThreadId(&Address, 0LL);
          while ( (v37[0] & 4) == 0 );
        }
      }
      else
      {
        v25 = (Ptr | 1) + 16;
        if ( v24 )
          v25 = Ptr | 1;
        if ( Ptr == _InterlockedCompareExchange64((volatile signed __int64 *)&Address, v25, Ptr) )
          goto LABEL_3;
LABEL_46:
        sub_1800365A0(&v38);
        _m_prefetchw(&Address);
        Ptr = (unsigned __int64)Address.Ptr;
      }
    }
  }
LABEL_16:
  v17 = sub_18001E9BC(v6);
  *(_QWORD *)(v4 + 8) = v17;
  if ( v17 )
  {
    if ( sub_18001C4DC(v17, 1, 3u, (DWORD *)(v4 + 20), &v39) < 0 )
    {
      v7 = 0LL;
      *(_QWORD *)v4 = 0LL;
    }
    else
    {
      v7 = v39;
      *(_QWORD *)v4 = v39;
    }
  }
  return v7;
}
