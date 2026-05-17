/*
 * XREFs of sub_1800D9C9C @ 0x1800D9C9C
 * Callers:
 *     sub_1800D9D80 @ 0x1800D9D80 (sub_1800D9D80.c)
 * Callees:
 *     DbgPrint @ 0x180053DA0 (DbgPrint.c)
 *     ZwSetInformationProcess @ 0x18009CA60 (ZwSetInformationProcess.c)
 */

__int64 sub_1800D9C9C()
{
  int v0; // ebx
  int v1; // eax

  if ( !dword_1801665D0 || (v0 = ZwSetInformationProcess(), v0 < 0) )
  {
    v1 = ZwSetInformationProcess();
    v0 = v1;
    if ( v1 < 0 )
      DbgPrint("AVRF: failed to enable handle checking (status %X) \n", v1);
  }
  return (unsigned int)v0;
}
