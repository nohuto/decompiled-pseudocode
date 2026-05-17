/*
 * XREFs of sub_1800E319C @ 0x1800E319C
 * Callers:
 *     sub_1800E29E8 @ 0x1800E29E8 (sub_1800E29E8.c)
 *     sub_1800E2A9C @ 0x1800E2A9C (sub_1800E2A9C.c)
 * Callees:
 *     ZwSetInformationFile @ 0x18009CBC0 (ZwSetInformationFile.c)
 */

__int64 __fastcall sub_1800E319C(__int64 a1)
{
  if ( (unsigned __int64)(a1 - 1) > 0xFFFFFFFFFFFFFFFDuLL )
    return 3221225480LL;
  else
    return ZwSetInformationFile();
}
