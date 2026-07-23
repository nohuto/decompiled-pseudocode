/*
 * XREFs of IovpExamineDevObjForwarding @ 0x140930AF8
 * Callers:
 *     IovpCallDriver1 @ 0x14092FC8C (IovpCallDriver1.c)
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x140051510 (ObfDereferenceObjectWithTag.c)
 *     IovUtilGetUpperDeviceObjectWithTag @ 0x14093654C (IovUtilGetUpperDeviceObjectWithTag.c)
 *     IovUtilRelateDeviceObjects @ 0x1409367CC (IovUtilRelateDeviceObjects.c)
 */

__int64 __fastcall IovpExamineDevObjForwarding(__int64 a1, __int64 a2)
{
  void *UpperDeviceObjectWithTag; // rax
  void *v5; // rax
  int v6; // [rsp+38h] [rbp+10h] BYREF

  if ( !a2 )
  {
    UpperDeviceObjectWithTag = (void *)IovUtilGetUpperDeviceObjectWithTag(a1);
    if ( !UpperDeviceObjectWithTag )
      return 1LL;
    ObfDereferenceObjectWithTag(UpperDeviceObjectWithTag, 0x49667256u);
    return 4LL;
  }
  IovUtilRelateDeviceObjects(a1, a2, &v6);
  switch ( v6 )
  {
    case 0:
      return 2LL;
    case 1:
      return 3LL;
    case 2:
      return 2LL;
    case 3:
    case 4:
      return 3LL;
  }
  if ( v6 != 5 )
    return 2LL;
  v5 = (void *)IovUtilGetUpperDeviceObjectWithTag(a1);
  if ( !v5 )
    return 5LL;
  ObfDereferenceObjectWithTag(v5, 0x49667256u);
  return 6LL;
}
