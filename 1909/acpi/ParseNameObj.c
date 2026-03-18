/*
 * XREFs of ParseNameObj @ 0x1C0011FCC
 * Callers:
 *     ParseScope @ 0x1C000DDB0 (ParseScope.c)
 *     ParseOpcode @ 0x1C0012CB0 (ParseOpcode.c)
 * Callees:
 *     PushCall @ 0x1C001070C (PushCall.c)
 *     GetBaseObject @ 0x1C0010D44 (GetBaseObject.c)
 *     DereferenceObjectEx @ 0x1C0013B20 (DereferenceObjectEx.c)
 *     ReadObject @ 0x1C001BF34 (ReadObject.c)
 *     ParseAndGetNameSpaceObject @ 0x1C001CFD4 (ParseAndGetNameSpaceObject.c)
 */

__int64 __fastcall ParseNameObj(struct _SLIST_ENTRY *a1, __int64 a2)
{
  _SLIST_ENTRY *Next; // r8
  unsigned int NameSpaceObject; // edi
  __int64 BaseObject; // rax
  __int64 v7; // rbx
  unsigned int Object; // eax
  __int64 v10; // [rsp+40h] [rbp+8h] BYREF

  Next = a1[5].Next;
  v10 = 0LL;
  NameSpaceObject = ParseAndGetNameSpaceObject((_DWORD)a1, (int)a1 + 120, (_DWORD)Next, (unsigned int)&v10, 0);
  if ( !NameSpaceObject )
  {
    BaseObject = GetBaseObject(v10);
    v7 = BaseObject;
    if ( *(_WORD *)(BaseObject + 66) == 8 )
      Object = PushCall(a1, BaseObject, a2);
    else
      Object = ReadObject(a1, BaseObject + 64, a2);
    NameSpaceObject = Object;
    DereferenceObjectEx(v7);
    DereferenceObjectEx(v10);
  }
  return NameSpaceObject;
}
