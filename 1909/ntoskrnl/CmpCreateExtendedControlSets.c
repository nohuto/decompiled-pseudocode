/*
 * XREFs of CmpCreateExtendedControlSets @ 0x140A0B778
 * Callers:
 *     CmInitSystem1 @ 0x140A0D1F0 (CmInitSystem1.c)
 * Callees:
 *     CmpCreateControlSet @ 0x140A0B32C (CmpCreateControlSet.c)
 */

__int64 __fastcall CmpCreateExtendedControlSets(__int64 a1)
{
  __int64 **v2; // rax
  __int64 *v3; // rbx
  __int64 result; // rax

  if ( !CmStateSeparationEnabled
    || (result = CmpCreateControlSet((__int64)L"DEVICES", 1), (int)(result + 0x80000000) < 0)
    || (_DWORD)result == -1073741772 )
  {
    v2 = (__int64 **)(*(_QWORD *)(a1 + 240) + 296LL);
    v3 = *v2;
    while ( v3 != (__int64 *)v2 )
    {
      if ( (*((_DWORD *)v3 + 6) & 0x80u) != 0 )
      {
        result = CmpCreateControlSet(v3[6], 1);
        if ( (int)result < 0 )
          return result;
      }
      v3 = (__int64 *)*v3;
      v2 = (__int64 **)(*(_QWORD *)(a1 + 240) + 296LL);
    }
    return 0LL;
  }
  return result;
}
