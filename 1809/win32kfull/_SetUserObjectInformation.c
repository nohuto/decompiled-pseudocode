/*
 * XREFs of _SetUserObjectInformation @ 0x1C01C42F4
 * Callers:
 *     NtUserSetObjectInformation @ 0x1C021CF80 (NtUserSetObjectInformation.c)
 * Callees:
 *     UserSetLastError @ 0x1C0073CC4 (UserSetLastError.c)
 */

__int64 __fastcall SetUserObjectInformation(HANDLE Handle, int a2, _DWORD *a3, unsigned int a4)
{
  unsigned int v8; // ebx
  int v9; // eax
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // r9
  POBJECT_TYPE *ObjectType; // rdi
  ACCESS_MASK v15; // edx
  __int64 v16; // rdx
  __int64 v17; // r8
  __int64 v18; // r9
  __int64 v19; // rcx
  __int64 v20; // rdx
  __int64 v21; // r8
  __int64 v22; // r9
  _BYTE v24[4]; // [rsp+30h] [rbp-58h] BYREF
  int v25; // [rsp+34h] [rbp-54h]
  PVOID Object; // [rsp+48h] [rbp-40h] BYREF
  struct _OBJECT_HANDLE_INFORMATION HandleInformation; // [rsp+50h] [rbp-38h] BYREF
  PVOID v28; // [rsp+58h] [rbp-30h] BYREF

  v8 = 1;
  v25 = 1;
  v9 = ObReferenceObjectByHandle(Handle, 0, 0LL, 1, &Object, 0LL);
  if ( v9 >= 0 )
  {
    ObjectType = (POBJECT_TYPE *)ObGetObjectType(Object);
    ObfDereferenceObject(Object);
    if ( ObjectType == (POBJECT_TYPE *)ExWindowStationObjectType )
    {
      v15 = 16;
    }
    else
    {
      if ( ObjectType != ExDesktopObjectType )
      {
        v11 = 1LL;
        goto LABEL_18;
      }
      v15 = 128;
    }
    v9 = ObReferenceObjectByHandle(Handle, v15, (POBJECT_TYPE)ObjectType, 1, &v28, &HandleInformation);
    if ( v9 >= 0 )
    {
      if ( a2 == 1 )
      {
        if ( a4 >= 0xC )
        {
          v24[0] = *a3 != 0;
          v24[1] = HandleInformation.HandleAttributes & 1;
          LOBYTE(v17) = 1;
          ObSetHandleAttributes(Handle, v24, v17);
          if ( ObjectType == ExDesktopObjectType )
          {
            v8 = SetHandleFlag(Handle, 0LL, a3[2] & 1);
            v25 = v8;
            if ( !v8 )
              UserSetLastError(8LL, v20, v21, v22);
          }
          goto LABEL_16;
        }
        v19 = 13LL;
      }
      else
      {
        v19 = 87LL;
      }
      UserSetLastError(v19, v16, v17, v18);
      v8 = 0;
      v25 = 0;
LABEL_16:
      ObfDereferenceObject(v28);
      return v8;
    }
  }
  v11 = RtlNtStatusToDosError(v9);
LABEL_18:
  UserSetLastError(v11, v10, v12, v13);
  return 0LL;
}
