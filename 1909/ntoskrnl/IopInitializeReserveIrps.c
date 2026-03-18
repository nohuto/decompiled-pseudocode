/*
 * XREFs of IopInitializeReserveIrps @ 0x140A1D5C8
 * Callers:
 *     IoInitSystemPreDrivers @ 0x140A05968 (IoInitSystemPreDrivers.c)
 * Callees:
 *     IopAllocateIrpWithExtension @ 0x1400F1600 (IopAllocateIrpWithExtension.c)
 */

char __fastcall IopInitializeReserveIrps(__int64 a1)
{
  __int64 v1; // rcx
  __int64 v2; // rcx
  __int64 v3; // rcx
  int v4; // ebx
  IRP *IrpWithExtension; // rax
  char result; // al

  byte_140461640 = 42;
  IopReserveIrps = (PIRP)IopAllocateIrpWithExtension(a1, 42, 0);
  if ( IopReserveIrps )
  {
    dword_140461568 = 0;
    qword_140461580 = (__int64)&qword_140461578;
    qword_140461578 = (__int64)&qword_140461578;
    word_140461570 = 1;
    byte_140461572 = 6;
    dword_140461574 = 0;
    qword_140461588 = (PIRP)IopAllocateIrpWithExtension(v1, 42, 0);
    if ( qword_140461588 )
    {
      dword_140461590 = 0;
      qword_1404615A8 = (__int64)&qword_1404615A0;
      qword_1404615A0 = (__int64)&qword_1404615A0;
      word_140461598 = 1;
      byte_14046159A = 6;
      dword_14046159C = 0;
      qword_1404615B0 = (PIRP)IopAllocateIrpWithExtension(v2, 42, 0);
      if ( qword_1404615B0 )
      {
        dword_1404615B8 = 0;
        stru_1404615C0.Header.WaitListHead.Blink = &stru_1404615C0.Header.WaitListHead;
        v4 = 0;
        stru_1404615C0.Header.WaitListHead.Flink = &stru_1404615C0.Header.WaitListHead;
        LOWORD(stru_1404615C0.Header.Lock) = 1;
        stru_1404615C0.Header.Size = 6;
        stru_1404615C0.Header.SignalState = 0;
        qword_140461638 = 0LL;
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
              qword_140461608 = IrpWithExtension;
            }
            else
            {
              *(_QWORD *)&IrpWithExtension->Type = qword_140461638;
              qword_140461638 = IrpWithExtension;
            }
          }
          else
          {
            Irp = IrpWithExtension;
          }
          if ( (unsigned int)++v4 >= 8 )
          {
            dword_1404615E0 = 0;
            qword_140461600 = (__int64)&qword_1404615F8;
            result = 1;
            qword_1404615F8 = (__int64)&qword_1404615F8;
            stru_140461620.Header.WaitListHead.Blink = &stru_140461620.Header.WaitListHead;
            stru_140461620.Header.WaitListHead.Flink = &stru_140461620.Header.WaitListHead;
            dword_140461610 = 0;
            qword_1404615E8 = 0LL;
            qword_140461618 = 0LL;
            word_1404615F0 = 1;
            byte_1404615F2 = 6;
            dword_1404615F4 = 0;
            LOWORD(stru_140461620.Header.Lock) = 1;
            stru_140461620.Header.Size = 6;
            stru_140461620.Header.SignalState = 0;
            return result;
          }
        }
      }
    }
  }
  return 0;
}
