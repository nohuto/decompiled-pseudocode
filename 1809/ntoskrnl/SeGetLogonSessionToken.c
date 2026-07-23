/*
 * XREFs of SeGetLogonSessionToken @ 0x1408A2E40
 * Callers:
 *     <none>
 * Callees:
 *     ObfDereferenceObject @ 0x14004E150 (ObfDereferenceObject.c)
 *     ObReferenceObjectByHandle @ 0x1405E9350 (ObReferenceObjectByHandle.c)
 *     ObInsertObjectEx @ 0x14062E0A0 (ObInsertObjectEx.c)
 *     SepDuplicateToken @ 0x14064A640 (SepDuplicateToken.c)
 */

NTSTATUS __fastcall SeGetLogonSessionToken(void *a1, KPROCESSOR_MODE a2, __int64 *a3)
{
  NTSTATUS result; // eax
  PVOID v6; // rdi
  __int64 v7; // rcx
  int inserted; // ebx
  __int64 v9; // [rsp+40h] [rbp-40h] BYREF
  int v10; // [rsp+48h] [rbp-38h] BYREF
  __int64 v11; // [rsp+50h] [rbp-30h]
  __int64 v12; // [rsp+58h] [rbp-28h]
  int v13; // [rsp+60h] [rbp-20h]
  __int128 v14; // [rsp+68h] [rbp-18h]
  PVOID Object; // [rsp+A8h] [rbp+28h] BYREF

  result = ObReferenceObjectByHandle(a1, 8u, (POBJECT_TYPE)SeTokenObjectType, a2, &Object, 0LL);
  if ( result >= 0 )
  {
    v6 = Object;
    v7 = *(_QWORD *)(*((_QWORD *)Object + 27) + 48LL);
    if ( v7 )
    {
      v11 = 0LL;
      v10 = 48;
      v14 = 0LL;
      v12 = 0LL;
      v13 = a2 == 0 ? 0x200 : 0;
      inserted = SepDuplicateToken(v7, (int)&v10, 0, 1, 0, 0, 0, &Object);
      if ( inserted >= 0 )
      {
        inserted = ObInsertObjectEx(Object, 0LL, 983551LL, 0, 0, 0LL, (unsigned __int64 *)&v9);
        if ( inserted >= 0 )
          *a3 = v9;
      }
    }
    else
    {
      inserted = -1073741700;
    }
    ObfDereferenceObject(v6);
    return inserted;
  }
  return result;
}
