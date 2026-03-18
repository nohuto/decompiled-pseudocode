/*
 * XREFs of MiInitializeTbFlushing @ 0x1409B9BB8
 * Callers:
 *     MiInitSystem @ 0x1409BC5A8 (MiInitSystem.c)
 * Callees:
 *     MiInitializeTbFlush @ 0x1409B9C04 (MiInitializeTbFlush.c)
 *     KeGetTbSize @ 0x1409B9EEC (KeGetTbSize.c)
 */

__int64 MiInitializeTbFlushing()
{
  __int64 TbSize; // rbx
  __int64 result; // rax

  TbSize = KeGetTbSize();
  if ( !TbSize )
    TbSize = 2048LL;
  qword_14043A110 = -1LL;
  result = MiInitializeTbFlush(TbSize);
  if ( qword_14043A110 == TbSize )
  {
    do
    {
      if ( TbSize == 2048 )
        break;
      qword_14043A110 = -1LL;
      TbSize = 2048LL;
      result = MiInitializeTbFlush(2048LL);
    }
    while ( qword_14043A110 == 2048 );
  }
  return result;
}
