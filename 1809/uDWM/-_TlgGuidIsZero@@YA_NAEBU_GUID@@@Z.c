/*
 * XREFs of ?_TlgGuidIsZero@@YA_NAEBU_GUID@@@Z @ 0x180083818
 * Callers:
 *     ?zInternalRelatedId@?$ActivityBase@VAnimationClockLogging@@$0A@$0A@$03U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEBAPEBU_GUID@@XZ @ 0x18004D948 (-zInternalRelatedId@-$ActivityBase@VAnimationClockLogging@@$0A@$0A@$03U_TlgReflectorTag_Param0Is.c)
 * Callees:
 *     <none>
 */

bool __fastcall _TlgGuidIsZero(const struct _GUID *a1)
{
  bool result; // al

  result = 0;
  if ( !a1->Data1 && !*(_DWORD *)&a1->Data2 && !*(_DWORD *)a1->Data4 )
    return *(_DWORD *)&a1->Data4[4] == 0;
  return result;
}
