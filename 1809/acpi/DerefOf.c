/*
 * XREFs of DerefOf @ 0x1C000B120
 * Callers:
 *     <none>
 * Callees:
 *     DereferenceObjectEx @ 0x1C00038B0 (DereferenceObjectEx.c)
 *     ValidateArgTypes @ 0x1C00099D0 (ValidateArgTypes.c)
 *     ReadObject @ 0x1C000B1A0 (ReadObject.c)
 *     GetBaseData @ 0x1C000B2B8 (GetBaseData.c)
 *     GetBaseObject @ 0x1C00141B8 (GetBaseObject.c)
 */

__int64 __fastcall DerefOf(__int64 a1, __int64 a2)
{
  __int64 result; // rax
  __int64 BaseData; // rbx
  __int16 v6; // ax
  unsigned __int64 BaseObject; // rax

  result = ValidateArgTypes(a1, *(_QWORD *)(a2 + 80), 0, "R");
  if ( !(_DWORD)result )
  {
    BaseData = *(_QWORD *)(a2 + 80);
    v6 = *(_WORD *)(BaseData + 2);
    if ( v6 == 128 )
    {
      BaseObject = GetBaseObject(*(_QWORD *)(BaseData + 16));
      BaseData = BaseObject + 64;
      DereferenceObjectEx(BaseObject);
    }
    else if ( v6 == 129 )
    {
      BaseData = GetBaseData(*(_QWORD *)(BaseData + 16));
    }
    return ReadObject(a1, BaseData, *(_QWORD *)(a2 + 88));
  }
  return result;
}
