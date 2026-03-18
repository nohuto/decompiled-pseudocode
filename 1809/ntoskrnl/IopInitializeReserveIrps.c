/*
 * XREFs of IopInitializeReserveIrps @ 0x1409DA110
 * Callers:
 *     IoInitSystemPreDrivers @ 0x1409B1F54 (IoInitSystemPreDrivers.c)
 * Callees:
 *     IopAllocateIrpWithExtension @ 0x14000EB44 (IopAllocateIrpWithExtension.c)
 */

char __fastcall IopInitializeReserveIrps(__int64 a1, __int64 a2)
{
  __int64 v2; // rdx
  __int64 v3; // rcx
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // rdx
  __int64 v7; // rcx
  int v8; // ebx
  IRP *IrpWithExtension; // rax
  char result; // al

  byte_140435DC0 = 42;
  LOBYTE(a2) = 42;
  IopReserveIrps = (PIRP)IopAllocateIrpWithExtension(a1, a2);
  if ( IopReserveIrps )
  {
    dword_140435CE8 = 0;
    qword_140435D00 = (__int64)&qword_140435CF8;
    qword_140435CF8 = (__int64)&qword_140435CF8;
    LOBYTE(v2) = 42;
    word_140435CF0 = 1;
    byte_140435CF2 = 6;
    dword_140435CF4 = 0;
    qword_140435D08 = (PIRP)IopAllocateIrpWithExtension(v3, v2);
    if ( qword_140435D08 )
    {
      dword_140435D10 = 0;
      qword_140435D28 = (__int64)&qword_140435D20;
      qword_140435D20 = (__int64)&qword_140435D20;
      LOBYTE(v4) = 42;
      word_140435D18 = 1;
      byte_140435D1A = 6;
      dword_140435D1C = 0;
      qword_140435D30 = (PIRP)IopAllocateIrpWithExtension(v5, v4);
      if ( qword_140435D30 )
      {
        dword_140435D38 = 0;
        stru_140435D40.Header.WaitListHead.Blink = &stru_140435D40.Header.WaitListHead;
        v8 = 0;
        stru_140435D40.Header.WaitListHead.Flink = &stru_140435D40.Header.WaitListHead;
        LOWORD(stru_140435D40.Header.Lock) = 1;
        stru_140435D40.Header.Size = 6;
        stru_140435D40.Header.SignalState = 0;
        qword_140435DB8 = 0LL;
        while ( 1 )
        {
          LOBYTE(v6) = 42;
          IrpWithExtension = (IRP *)IopAllocateIrpWithExtension(v7, v6);
          v7 = (__int64)IrpWithExtension;
          if ( !IrpWithExtension )
            break;
          if ( v8 )
          {
            if ( v8 == 1 )
            {
              qword_140435D88 = IrpWithExtension;
            }
            else
            {
              *(_QWORD *)&IrpWithExtension->Type = qword_140435DB8;
              qword_140435DB8 = IrpWithExtension;
            }
          }
          else
          {
            Irp = IrpWithExtension;
          }
          if ( (unsigned int)++v8 >= 8 )
          {
            dword_140435D60 = 0;
            qword_140435D80 = (__int64)&qword_140435D78;
            result = 1;
            qword_140435D78 = (__int64)&qword_140435D78;
            stru_140435DA0.Header.WaitListHead.Blink = &stru_140435DA0.Header.WaitListHead;
            stru_140435DA0.Header.WaitListHead.Flink = &stru_140435DA0.Header.WaitListHead;
            dword_140435D90 = 0;
            qword_140435D68 = 0LL;
            qword_140435D98 = 0LL;
            word_140435D70 = 1;
            byte_140435D72 = 6;
            dword_140435D74 = 0;
            LOWORD(stru_140435DA0.Header.Lock) = 1;
            stru_140435DA0.Header.Size = 6;
            stru_140435DA0.Header.SignalState = 0;
            return result;
          }
        }
      }
    }
  }
  return 0;
}
