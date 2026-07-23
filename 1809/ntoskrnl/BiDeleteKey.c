/*
 * XREFs of BiDeleteKey @ 0x1406E310C
 * Callers:
 *     BiDeleteKey @ 0x1406E310C (BiDeleteKey.c)
 *     BiDeleteElement @ 0x14071383C (BiDeleteElement.c)
 *     BcdSetElementDataWithFlags @ 0x140714610 (BcdSetElementDataWithFlags.c)
 *     BcdDeleteObject @ 0x1408F1B40 (BcdDeleteObject.c)
 * Callees:
 *     BiSanitizeHandle @ 0x14013B4D0 (BiSanitizeHandle.c)
 *     BiZwDeleteKey @ 0x1401595D4 (BiZwDeleteKey.c)
 *     CmSiCloseSection @ 0x14016E6C8 (CmSiCloseSection.c)
 *     ExFreePoolWithTag @ 0x14034CC60 (ExFreePoolWithTag.c)
 *     BiDeleteKey @ 0x1406E310C (BiDeleteKey.c)
 *     BiEnumerateSubKeys @ 0x140713BC4 (BiEnumerateSubKeys.c)
 *     BiOpenKey @ 0x140714A20 (BiOpenKey.c)
 *     BiCloseKey @ 0x140714B90 (BiCloseKey.c)
 */

__int64 __fastcall BiDeleteKey(__int64 a1)
{
  unsigned __int64 v1; // rax
  void *v2; // rsi
  NTSTATUS v3; // ebx
  _QWORD *v5; // rbx
  __int64 v6; // rbp
  __int64 v7; // [rsp+38h] [rbp+10h] BYREF
  PVOID P; // [rsp+40h] [rbp+18h] BYREF

  v1 = BiSanitizeHandle(a1);
  P = 0LL;
  v2 = (void *)v1;
  if ( (int)BiEnumerateSubKeys(v1, &P, &v7) >= 0 && (_DWORD)v7 )
  {
    v5 = P;
    v6 = (unsigned int)v7;
    do
    {
      if ( (int)BiOpenKey(v2, *v5, 983103LL, &v7) >= 0 && (int)BiDeleteKey(v7) < 0 )
        BiCloseKey(v7);
      ++v5;
      --v6;
    }
    while ( v6 );
  }
  if ( P )
    ExFreePoolWithTag(P, 0x4B444342u);
  v3 = BiZwDeleteKey(v2);
  if ( v3 >= 0 )
    CmSiCloseSection(v2);
  return (unsigned int)v3;
}
