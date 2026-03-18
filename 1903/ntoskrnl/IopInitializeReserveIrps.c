/*
 * XREFs of IopInitializeReserveIrps @ 0x140A1D3EC
 * Callers:
 *     IoInitSystemPreDrivers @ 0x140A0544C (IoInitSystemPreDrivers.c)
 * Callees:
 *     IopAllocateIrpWithExtension @ 0x1400B54F8 (IopAllocateIrpWithExtension.c)
 */

char __fastcall IopInitializeReserveIrps(__int64 a1)
{
  __int64 v1; // rcx
  __int64 v2; // rcx
  __int64 v3; // rcx
  int v4; // ebx
  IRP *IrpWithExtension; // rax
  char result; // al

  byte_140461960 = 42;
  IopReserveIrps = (PIRP)IopAllocateIrpWithExtension(a1, 42, 0);
  if ( IopReserveIrps )
  {
    dword_140461888 = 0;
    qword_1404618A0 = (__int64)&qword_140461898;
    qword_140461898 = (__int64)&qword_140461898;
    word_140461890 = 1;
    byte_140461892 = 6;
    dword_140461894 = 0;
    qword_1404618A8 = (PIRP)IopAllocateIrpWithExtension(v1, 42, 0);
    if ( qword_1404618A8 )
    {
      dword_1404618B0 = 0;
      qword_1404618C8 = (__int64)&qword_1404618C0;
      qword_1404618C0 = (__int64)&qword_1404618C0;
      word_1404618B8 = 1;
      byte_1404618BA = 6;
      dword_1404618BC = 0;
      qword_1404618D0 = (PIRP)IopAllocateIrpWithExtension(v2, 42, 0);
      if ( qword_1404618D0 )
      {
        dword_1404618D8 = 0;
        stru_1404618E0.Header.WaitListHead.Blink = &stru_1404618E0.Header.WaitListHead;
        v4 = 0;
        stru_1404618E0.Header.WaitListHead.Flink = &stru_1404618E0.Header.WaitListHead;
        LOWORD(stru_1404618E0.Header.Lock) = 1;
        stru_1404618E0.Header.Size = 6;
        stru_1404618E0.Header.SignalState = 0;
        qword_140461958 = 0LL;
        while ( 1 )
        {
          IrpWithExtension = (IRP *)IopAllocateIrpWithExtension(v3, 42, 0);
          v3 = (__int64)IrpWithExtension;
          if ( !IrpWithExtension )
            break;
          if ( v4 )
          {
            if ( v4 == 1 )
            {
              qword_140461928 = IrpWithExtension;
            }
            else
            {
              *(_QWORD *)&IrpWithExtension->Type = qword_140461958;
              qword_140461958 = IrpWithExtension;
            }
          }
          else
          {
            Irp = IrpWithExtension;
          }
          if ( (unsigned int)++v4 >= 8 )
          {
            dword_140461900 = 0;
            qword_140461920 = (__int64)&qword_140461918;
            result = 1;
            qword_140461918 = (__int64)&qword_140461918;
            stru_140461940.Header.WaitListHead.Blink = &stru_140461940.Header.WaitListHead;
            stru_140461940.Header.WaitListHead.Flink = &stru_140461940.Header.WaitListHead;
            dword_140461930 = 0;
            qword_140461908 = 0LL;
            qword_140461938 = 0LL;
            word_140461910 = 1;
            byte_140461912 = 6;
            dword_140461914 = 0;
            LOWORD(stru_140461940.Header.Lock) = 1;
            stru_140461940.Header.Size = 6;
            stru_140461940.Header.SignalState = 0;
            return result;
          }
        }
      }
    }
  }
  return 0;
}
