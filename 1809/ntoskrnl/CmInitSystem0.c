/*
 * XREFs of CmInitSystem0 @ 0x1409CDCF0
 * Callers:
 *     InitBootProcessor @ 0x1409B5EDC (InitBootProcessor.c)
 * Callees:
 *     CmpGetSystemControlValues @ 0x1409CF008 (CmpGetSystemControlValues.c)
 */

__int64 **__fastcall CmInitSystem0(__int64 a1, __int64 a2)
{
  __int64 v3; // rdx
  __int64 v4; // r8
  __int64 **result; // rax
  __int64 *v6; // rbx

  CmpGetSystemControlValues(*(_QWORD *)(a1 + 168), a2, 0LL);
  result = (__int64 **)(*(_QWORD *)(a1 + 240) + 272LL);
  v6 = *result;
  while ( v6 != (__int64 *)result )
  {
    if ( (v6[3] & 0x40) != 0 )
    {
      LOBYTE(v4) = 1;
      CmpGetSystemControlValues(v6[4], v3, v4);
      *((_DWORD *)v6 + 6) &= ~0x40u;
    }
    v6 = (__int64 *)*v6;
    result = (__int64 **)(*(_QWORD *)(a1 + 240) + 272LL);
  }
  return result;
}
