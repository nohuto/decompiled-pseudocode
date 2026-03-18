/*
 * XREFs of AMLIApplyNamespaceOverride @ 0x1C0006FB0
 * Callers:
 *     ParseLoad @ 0x1C0006D20 (ParseLoad.c)
 *     ParseUnload @ 0x1C006B8B0 (ParseUnload.c)
 * Callees:
 *     DereferenceObjectEx @ 0x1C0013B20 (DereferenceObjectEx.c)
 *     GetNameSpaceObject @ 0x1C001AD04 (GetNameSpaceObject.c)
 *     AMLIApplyNextNamespaceOverride @ 0x1C006464C (AMLIApplyNextNamespaceOverride.c)
 */

__int64 AMLIApplyNamespaceOverride()
{
  int NameSpaceObject; // ebx
  __int64 v2; // [rsp+30h] [rbp+8h]

  if ( (gOverrideFlags & 0x20) != 0 && gpnsNameSpaceOverrideRoot )
  {
    NameSpaceObject = GetNameSpaceObject((void *)"\\");
    if ( NameSpaceObject >= 0 )
    {
      NameSpaceObject = AMLIApplyNextNamespaceOverride(gpnsNameSpaceOverrideRoot, v2);
      DereferenceObjectEx(v2);
    }
  }
  else
  {
    return 0;
  }
  return (unsigned int)NameSpaceObject;
}
