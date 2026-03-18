/*
 * XREFs of NtDCompositionCreateSharedResourceHandle @ 0x1C019FF70
 * Callers:
 *     <none>
 * Callees:
 *     CreateSharedResourceObject @ 0x1C000F7F4 (CreateSharedResourceObject.c)
 *     ?CreateHandle@CompositionObject@@QEBAJK_NDPEAPEAX@Z @ 0x1C008A3A0 (-CreateHandle@CompositionObject@@QEBAJK_NDPEAPEAX@Z.c)
 */

__int64 __fastcall NtDCompositionCreateSharedResourceHandle(__int64 a1, _QWORD *a2)
{
  CompositionObject *v3; // rsi
  signed int v4; // ebx
  HANDLE Handle; // [rsp+50h] [rbp+18h] BYREF
  struct DirectComposition::ResourceObject *v7; // [rsp+58h] [rbp+20h] BYREF

  v3 = 0LL;
  v7 = 0LL;
  Handle = 0LL;
  v4 = (_DWORD)a1 != 189 ? 0xC000000D : 0;
  if ( (_DWORD)a1 == 189 )
  {
    v4 = CreateSharedResourceObject(a1, &v7);
    v3 = v7;
  }
  if ( v4 >= 0 )
  {
    v4 = CompositionObject::CreateHandle(v3, 1u, 0, 1, &Handle);
    ObfDereferenceObject(v3);
    if ( v4 >= 0 )
    {
      if ( (unsigned __int64)a2 >= MmUserProbeAddress )
        a2 = (_QWORD *)MmUserProbeAddress;
      *a2 = Handle;
    }
  }
  return (unsigned int)v4;
}
