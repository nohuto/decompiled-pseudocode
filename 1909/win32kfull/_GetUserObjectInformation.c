/*
 * XREFs of _GetUserObjectInformation @ 0x1C00602AC
 * Callers:
 *     NtUserGetObjectInformation @ 0x1C0060600 (NtUserGetObjectInformation.c)
 * Callees:
 *     UserSetLastError @ 0x1C002862C (UserSetLastError.c)
 *     CheckHandleFlag @ 0x1C0029EC8 (CheckHandleFlag.c)
 *     memmove @ 0x1C0168100 (memmove.c)
 */

__int64 __fastcall GetUserObjectInformation(HANDLE Handle, int a2, _DWORD *a3, unsigned int a4, int *a5)
{
  unsigned int v8; // ebx
  int v9; // esi
  int v10; // edi
  int v11; // eax
  POBJECT_TYPE *ObjectType; // r13
  __int64 v13; // rdx
  __int64 v14; // r8
  __int64 v15; // r9
  __int64 v16; // rdx
  size_t v17; // r8
  __int64 v18; // r9
  int v19; // r14d
  int v20; // r14d
  const void **v21; // r14
  __int64 v22; // rcx
  int v23; // r14d
  int v24; // r14d
  int v25; // r14d
  const void **v26; // r14
  void *v27; // rcx
  ULONG v28; // eax
  __int64 v30; // rcx
  PVOID v31; // [rsp+38h] [rbp-70h] BYREF
  PVOID Object; // [rsp+48h] [rbp-60h] BYREF
  const void **v33; // [rsp+50h] [rbp-58h]
  struct _OBJECT_HANDLE_INFORMATION HandleInformation; // [rsp+58h] [rbp-50h] BYREF
  const void **v35; // [rsp+68h] [rbp-40h]

  v8 = 1;
  v9 = 0;
  v10 = 0;
  HandleInformation = 0LL;
  v11 = ObReferenceObjectByHandle(Handle, 0, 0LL, 1, &Object, 0LL);
  if ( v11 < 0 )
    goto LABEL_45;
  ObjectType = (POBJECT_TYPE *)ObGetObjectType(Object);
  ObfDereferenceObject(Object);
  if ( ObjectType == (POBJECT_TYPE *)ExWindowStationObjectType )
  {
    v13 = 2LL;
    goto LABEL_5;
  }
  if ( ObjectType == ExDesktopObjectType )
  {
    v13 = 1LL;
LABEL_5:
    if ( (unsigned int)(a2 - 5) <= 1 && ObjectType != ExDesktopObjectType )
      goto LABEL_44;
    v11 = ObReferenceObjectByHandle(Handle, v13, (POBJECT_TYPE)ObjectType, 1, &v31, &HandleInformation);
    if ( v11 >= 0 )
    {
      v19 = a2 - 1;
      if ( v19 )
      {
        v20 = v19 - 1;
        if ( !v20 )
        {
          if ( !ObQueryNameInfo(v31) )
          {
            v21 = 0LL;
            v33 = 0LL;
LABEL_12:
            if ( v21 )
            {
              v17 = *(unsigned __int16 *)v21;
              v10 = v17 + 2;
              if ( (int)v17 + 2 <= a4 )
              {
                memmove(a3, v21[1], v17);
                *(_WORD *)((char *)a3 + *(unsigned __int16 *)v21) = 0;
LABEL_41:
                *a5 = v10;
                ObfDereferenceObject(v31);
                return v8;
              }
              goto LABEL_15;
            }
LABEL_38:
            v10 = 0;
            goto LABEL_41;
          }
          v21 = (const void **)(ObQueryNameInfo(v31) + 8);
LABEL_11:
          v33 = v21;
          goto LABEL_12;
        }
        v23 = v20 - 1;
        if ( !v23 )
        {
          v21 = (const void **)(ObjectType + 2);
          goto LABEL_11;
        }
        v24 = v23 - 1;
        if ( v24 )
        {
          v25 = v24 - 1;
          if ( v25 )
          {
            if ( v25 != 1 )
            {
              v22 = 87LL;
              goto LABEL_16;
            }
            v10 = 4;
            if ( a4 >= 4 )
            {
              LOBYTE(v9) = v31 == (PVOID)grpdeskRitInput;
              *a3 = v9;
              goto LABEL_41;
            }
          }
          else
          {
            v10 = 4;
            if ( a4 >= 4 )
            {
              *a3 = *((_DWORD *)v31 + 34) >> 10;
              goto LABEL_41;
            }
          }
        }
        else
        {
          if ( ObjectType == (POBJECT_TYPE *)ExWindowStationObjectType )
            v26 = (const void **)v31;
          else
            v26 = (const void **)*((_QWORD *)v31 + 5);
          v35 = v26;
          v27 = (void *)v26[20];
          if ( !v27 )
            goto LABEL_38;
          v28 = RtlLengthSid(v27);
          v10 = v28;
          if ( v28 <= a4 )
          {
            memmove(a3, v26[20], v28);
            goto LABEL_41;
          }
        }
      }
      else
      {
        v10 = 12;
        if ( a4 >= 0xC )
        {
          *a3 = (HandleInformation.HandleAttributes >> 1) & 1;
          *(_QWORD *)(a3 + 1) = 0LL;
          if ( ObjectType == ExDesktopObjectType )
          {
            if ( (unsigned int)CheckHandleFlag(0LL, *(_DWORD *)v31, (unsigned int)Handle, 0) )
              a3[2] |= 1u;
          }
          else if ( (*((_DWORD *)v31 + 8) & 4) == 0 )
          {
            a3[2] = 1;
          }
          goto LABEL_41;
        }
      }
LABEL_15:
      v22 = 122LL;
LABEL_16:
      UserSetLastError(v22, v16, v17, v18);
      v8 = 0;
      goto LABEL_41;
    }
LABEL_45:
    v30 = RtlNtStatusToDosError(v11);
    goto LABEL_46;
  }
LABEL_44:
  v30 = 1LL;
LABEL_46:
  UserSetLastError(v30, v13, v14, v15);
  return 0LL;
}
