/*
 * XREFs of MiInitializeTbFlushing @ 0x140A0F0EC
 * Callers:
 *     MiInitSystem @ 0x1409F0E88 (MiInitSystem.c)
 * Callees:
 *     MiInitializeTbFlush @ 0x140A0F138 (MiInitializeTbFlush.c)
 *     KeGetTbSize @ 0x140A0F41C (KeGetTbSize.c)
 */

__int64 MiInitializeTbFlushing()
{
  __int64 TbSize; // rbx
  __int64 result; // rax

  TbSize = KeGetTbSize();
  if ( !TbSize )
    TbSize = 2048LL;
  qword_140465B50 = -1LL;
  result = MiInitializeTbFlush(TbSize);
  if ( qword_140465B50 == TbSize )
  {
    do
    {
      if ( TbSize == 2048 )
        break;
      qword_140465B50 = -1LL;
      TbSize = 2048LL;
      result = MiInitializeTbFlush(2048LL);
    }
    while ( qword_140465B50 == 2048 );
  }
  return result;
}
