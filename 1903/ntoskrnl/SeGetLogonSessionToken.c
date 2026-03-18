/*
 * XREFs of SeGetLogonSessionToken @ 0x1408E04F0
 * Callers:
 *     <none>
 * Callees:
 *     ObfDereferenceObject @ 0x14003E260 (ObfDereferenceObject.c)
 *     SepDuplicateToken @ 0x1405D88E0 (SepDuplicateToken.c)
 *     ObInsertObjectEx @ 0x1405D95A0 (ObInsertObjectEx.c)
 *     ObReferenceObjectByHandle @ 0x1405FA460 (ObReferenceObjectByHandle.c)
 */

NTSTATUS __fastcall SeGetLogonSessionToken(void *a1, KPROCESSOR_MODE a2, __int64 *a3)
{
  NTSTATUS result; // eax
  PVOID v6; // rdi
  __int64 v7; // rcx
  int inserted; // ebx
  __int64 v9; // [rsp+40h] [rbp-40h] BYREF
  _DWORD v10[2]; // [rsp+48h] [rbp-38h] BYREF
  __int64 v11; // [rsp+50h] [rbp-30h]
  __int64 v12; // [rsp+58h] [rbp-28h]
  int v13; // [rsp+60h] [rbp-20h]
  int v14; // [rsp+64h] [rbp-1Ch]
  __int128 v15; // [rsp+68h] [rbp-18h]
  PVOID Object; // [rsp+A8h] [rbp+28h] BYREF

  v10[1] = 0;
  v14 = 0;
  result = ObReferenceObjectByHandle(a1, 8u, (POBJECT_TYPE)SeTokenObjectType, a2, &Object, 0LL);
  if ( result >= 0 )
  {
    v6 = Object;
    v7 = *(_QWORD *)(*((_QWORD *)Object + 27) + 48LL);
    if ( v7 )
    {
      v11 = 0LL;
      v10[0] = 48;
      v15 = 0LL;
      v12 = 0LL;
      v13 = a2 == 0 ? 0x200 : 0;
      inserted = SepDuplicateToken(v7, (int)v10, 0, 1, 0, 0, 0, (char **)&Object);
      if ( inserted >= 0 )
      {
        inserted = ObInsertObjectEx(Object, 0LL, 0xF01FFu, 0, 0, 0LL, &v9);
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
