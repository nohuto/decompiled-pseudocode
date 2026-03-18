/*
 * XREFs of ?Initialize@CEvent@DirectComposition@@AEAAJPEAX_N@Z @ 0x1C000DCC8
 * Callers:
 *     ?Create@CEvent@DirectComposition@@SAJW4_EVENT_TYPE@@HPEAPEAV12@@Z @ 0x1C000DBD8 (-Create@CEvent@DirectComposition@@SAJW4_EVENT_TYPE@@HPEAPEAV12@@Z.c)
 *     ?Create@CEvent@DirectComposition@@SAJPEAXHPEAPEAV12@@Z @ 0x1C007003C (-Create@CEvent@DirectComposition@@SAJPEAXHPEAPEAV12@@Z.c)
 * Callees:
 *     <none>
 */

NTSTATUS __fastcall DirectComposition::CEvent::Initialize(DirectComposition::CEvent *this, void *a2, char a3)
{
  NTSTATUS result; // eax
  PVOID Object; // [rsp+40h] [rbp+8h] BYREF

  result = ObReferenceObjectByHandle(a2, 2u, (POBJECT_TYPE)ExEventObjectType, a3 ^ 1, &Object, 0LL);
  *((_QWORD *)this + 1) = Object;
  return result;
}
