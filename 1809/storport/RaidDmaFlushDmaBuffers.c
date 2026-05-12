/*
 * XREFs of RaidDmaFlushDmaBuffers @ 0x1C002563C
 * Callers:
 *     RaidAdapterExecuteXrb @ 0x1C0002F58 (RaidAdapterExecuteXrb.c)
 *     RaUnitStartIo @ 0x1C0003430 (RaUnitStartIo.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C002C060 (_guard_dispatch_icall_nop.c)
 */

void __fastcall RaidDmaFlushDmaBuffers(int *a1, __int64 a2, __int64 a3)
{
  char v3; // r11
  __int64 v4; // r10
  __int64 v5; // rax
  void (__fastcall *v6)(_QWORD); // rax

  v3 = a3;
  v4 = a2;
  if ( a2 )
  {
    if ( a1 )
    {
      if ( *(_QWORD *)a1 )
      {
        v5 = *(_QWORD *)(*(_QWORD *)a1 + 8LL);
        if ( v5 )
        {
          if ( a1[7] >= 3 && (v6 = *(void (__fastcall **)(_QWORD))(v5 + 240)) != 0LL )
          {
            v6(*(_QWORD *)a1);
          }
          else
          {
            LOBYTE(a3) = 1;
            LOBYTE(a2) = v3;
            KeFlushIoBuffers(v4, a2, a3);
          }
        }
      }
    }
  }
}
