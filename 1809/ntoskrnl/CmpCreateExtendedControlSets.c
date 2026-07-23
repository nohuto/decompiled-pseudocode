/*
 * XREFs of CmpCreateExtendedControlSets @ 0x1409C26CC
 * Callers:
 *     CmInitSystem1 @ 0x1409C4050 (CmInitSystem1.c)
 * Callees:
 *     CmpCreateControlSet @ 0x1409C22B4 (CmpCreateControlSet.c)
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
    v2 = (__int64 **)(*(_QWORD *)(a1 + 240) + 272LL);
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
      v2 = (__int64 **)(*(_QWORD *)(a1 + 240) + 272LL);
    }
    return 0LL;
  }
  return result;
}
