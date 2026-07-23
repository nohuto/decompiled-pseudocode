/*
 * XREFs of DrvDbGetObjectDatabaseNode @ 0x1406D42FC
 * Callers:
 *     DrvDbOpenObjectRegKey @ 0x1406D3F18 (DrvDbOpenObjectRegKey.c)
 *     DrvDbDeleteObjectRegKey @ 0x14090200C (DrvDbDeleteObjectRegKey.c)
 * Callees:
 *     wcschr @ 0x140197810 (wcschr.c)
 *     RtlFreeAnsiString @ 0x140624790 (RtlFreeAnsiString.c)
 *     DrvDbFindDatabaseNode @ 0x1406D4E18 (DrvDbFindDatabaseNode.c)
 *     RtlDuplicateUnicodeString @ 0x1406D4EA0 (RtlDuplicateUnicodeString.c)
 */

__int64 __fastcall DrvDbGetObjectDatabaseNode(__int64 a1, wchar_t *a2, wchar_t **a3, _QWORD *a4)
{
  NTSTATUS DatabaseNode; // ebx
  wchar_t *v9; // rdi
  wchar_t *v11; // rbp
  wchar_t *v12; // rax
  UNICODE_STRING StringIn; // [rsp+20h] [rbp-38h] BYREF
  UNICODE_STRING StringOut; // [rsp+30h] [rbp-28h] BYREF

  DatabaseNode = 0;
  if ( *a2 != 64
    || (v11 = a2 + 1, (v12 = wcschr(a2 + 1, 0x3Au)) == 0LL)
    || (StringIn.Buffer = v11,
        StringIn.Length = 2 * (v12 - v11),
        StringIn.MaximumLength = StringIn.Length,
        v9 = v12 + 1,
        v12 == (wchar_t *)-2LL) )
  {
    v9 = a2;
LABEL_3:
    *a4 = *(_QWORD *)(a1 + 40);
    goto LABEL_4;
  }
  if ( v9 == a2 )
    goto LABEL_3;
  DatabaseNode = RtlDuplicateUnicodeString(1u, &StringIn, &StringOut);
  if ( DatabaseNode < 0 )
    return (unsigned int)DatabaseNode;
  DatabaseNode = DrvDbFindDatabaseNode(a1, StringOut.Buffer, a4);
  RtlFreeAnsiString(&StringOut);
  if ( DatabaseNode == -1073741772 )
    return (unsigned int)-1073741766;
  if ( DatabaseNode < 0 )
    return (unsigned int)DatabaseNode;
LABEL_4:
  *a3 = v9;
  return (unsigned int)DatabaseNode;
}
