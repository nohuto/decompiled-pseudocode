/*
 * XREFs of IopInitializeReserveIrps @ 0x1409DB110
 * Callers:
 *     IoInitSystemPreDrivers @ 0x1409B2F54 (IoInitSystemPreDrivers.c)
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

  byte_140436E60 = 42;
  LOBYTE(a2) = 42;
  IopReserveIrps = (PIRP)IopAllocateIrpWithExtension(a1, a2);
  if ( IopReserveIrps )
  {
    dword_140436D88 = 0;
    qword_140436DA0 = (__int64)&qword_140436D98;
    qword_140436D98 = (__int64)&qword_140436D98;
    LOBYTE(v2) = 42;
    word_140436D90 = 1;
    byte_140436D92 = 6;
    dword_140436D94 = 0;
    qword_140436DA8 = (PIRP)IopAllocateIrpWithExtension(v3, v2);
    if ( qword_140436DA8 )
    {
      dword_140436DB0 = 0;
      qword_140436DC8 = (__int64)&qword_140436DC0;
      qword_140436DC0 = (__int64)&qword_140436DC0;
      LOBYTE(v4) = 42;
      word_140436DB8 = 1;
      byte_140436DBA = 6;
      dword_140436DBC = 0;
      qword_140436DD0 = (PIRP)IopAllocateIrpWithExtension(v5, v4);
      if ( qword_140436DD0 )
      {
        dword_140436DD8 = 0;
        stru_140436DE0.Header.WaitListHead.Blink = &stru_140436DE0.Header.WaitListHead;
        v8 = 0;
        stru_140436DE0.Header.WaitListHead.Flink = &stru_140436DE0.Header.WaitListHead;
        LOWORD(stru_140436DE0.Header.Lock) = 1;
        stru_140436DE0.Header.Size = 6;
        stru_140436DE0.Header.SignalState = 0;
        qword_140436E58 = 0LL;
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
              qword_140436E28 = IrpWithExtension;
            }
            else
            {
              *(_QWORD *)&IrpWithExtension->Type = qword_140436E58;
              qword_140436E58 = IrpWithExtension;
            }
          }
          else
          {
            Irp = IrpWithExtension;
          }
          if ( (unsigned int)++v8 >= 8 )
          {
            dword_140436E00 = 0;
            qword_140436E20 = (__int64)&qword_140436E18;
            result = 1;
            qword_140436E18 = (__int64)&qword_140436E18;
            stru_140436E40.Header.WaitListHead.Blink = &stru_140436E40.Header.WaitListHead;
            stru_140436E40.Header.WaitListHead.Flink = &stru_140436E40.Header.WaitListHead;
            dword_140436E30 = 0;
            qword_140436E08 = 0LL;
            qword_140436E38 = 0LL;
            word_140436E10 = 1;
            byte_140436E12 = 6;
            dword_140436E14 = 0;
            LOWORD(stru_140436E40.Header.Lock) = 1;
            stru_140436E40.Header.Size = 6;
            stru_140436E40.Header.SignalState = 0;
            return result;
          }
        }
      }
    }
  }
  return 0;
}
