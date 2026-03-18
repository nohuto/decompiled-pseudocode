/*
 * XREFs of CreateNativeNameSpaceObject @ 0x1C00229A0
 * Callers:
 *     InitializeNativeNamespace @ 0x1C00234D0 (InitializeNativeNamespace.c)
 *     AMLICreateNativeNamespaceObject @ 0x1C0061EF8 (AMLICreateNativeNamespaceObject.c)
 * Callees:
 *     FreeNameSpaceObjects @ 0x1C0003550 (FreeNameSpaceObjects.c)
 *     DereferenceObjectEx @ 0x1C00038B0 (DereferenceObjectEx.c)
 *     CreateNameSpaceObject @ 0x1C0006190 (CreateNameSpaceObject.c)
 *     GetNameSpaceObject @ 0x1C0021288 (GetNameSpaceObject.c)
 *     SetClearAssociatedNativeObject @ 0x1C002332C (SetClearAssociatedNativeObject.c)
 *     GetNextNameSegment @ 0x1C00233A4 (GetNextNameSegment.c)
 *     GetObjectPath @ 0x1C0023478 (GetObjectPath.c)
 *     __security_check_cookie @ 0x1C0030A80 (__security_check_cookie.c)
 */

__int64 __fastcall CreateNativeNameSpaceObject(
        __int64 a1,
        _BYTE *a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        __int64 *a8)
{
  unsigned __int64 v8; // rdi
  unsigned __int64 v9; // r15
  __int64 v10; // r12
  int NameSpaceObject; // eax
  unsigned __int64 v12; // r14
  int NextNameSegment; // ebx
  _BYTE *ObjectPath; // r13
  bool v15; // zf
  _BYTE *v16; // r15
  _BYTE *v17; // rsi
  _BYTE *v18; // r12
  int v19; // eax
  unsigned __int64 v20; // rsi
  unsigned __int64 v21; // rdx
  unsigned __int64 v23; // [rsp+30h] [rbp-59h] BYREF
  unsigned __int64 v24; // [rsp+38h] [rbp-51h] BYREF
  unsigned __int64 v25; // [rsp+40h] [rbp-49h] BYREF
  _BYTE *v26; // [rsp+48h] [rbp-41h] BYREF
  __int64 v27; // [rsp+50h] [rbp-39h]
  __int64 v28; // [rsp+58h] [rbp-31h]
  struct _EX_RUNDOWN_REF *v29; // [rsp+60h] [rbp-29h]
  __int64 v30; // [rsp+68h] [rbp-21h]
  __int64 *v31; // [rsp+70h] [rbp-19h]
  unsigned __int8 Src[8]; // [rsp+78h] [rbp-11h] BYREF

  v31 = a8;
  v29 = (struct _EX_RUNDOWN_REF *)gpNativeNameSpaceOwner;
  v8 = 0LL;
  v28 = gpnsNativeNameSpaceOverrideRoot;
  v9 = 0LL;
  v10 = 0LL;
  v30 = gpheapGlobal;
  v27 = gpnsNameSpaceRoot;
  v24 = 0LL;
  v23 = 0LL;
  v25 = 0LL;
  NameSpaceObject = GetNameSpaceObject(a2, a3, (__int64 *)&v25, 0);
  v12 = v25;
  NextNameSegment = NameSpaceObject;
  if ( NameSpaceObject >= 0 )
  {
    ObjectPath = (_BYTE *)GetObjectPath(v25);
    if ( ObjectPath )
    {
      DereferenceObjectEx(v12);
      v15 = *ObjectPath == 92;
      v12 = 0LL;
      v25 = 0LL;
      v16 = ObjectPath;
      v17 = ObjectPath;
      v26 = ObjectPath;
      v18 = ObjectPath;
      if ( v15 )
      {
        v17 = ObjectPath + 1;
        v16 = ObjectPath + 1;
        v26 = ObjectPath + 1;
        v18 = ObjectPath + 1;
      }
      NextNameSegment = GetNameSpaceObject(v17, v28, (__int64 *)&v23, 0);
      if ( NextNameSegment >= 0 )
      {
        FreeNameSpaceObjects(v23);
        v23 = 0LL;
        v16 = v18;
      }
      if ( (gdwfAMLI & 4) != 0 )
      {
        _InterlockedIncrement((volatile signed __int32 *)(v27 + 112));
        v8 = v24;
        v12 = v25;
        v17 = v26;
      }
      v10 = v28;
      Src[4] = 0;
      if ( (gdwfAMLI & 4) != 0 )
      {
        _InterlockedIncrement((volatile signed __int32 *)(v28 + 112));
        v8 = v24;
        v12 = v25;
        v17 = v26;
      }
      v15 = v16 == 0LL;
      v9 = v27;
      if ( !v15 )
      {
        while ( 1 )
        {
          NextNameSegment = GetNextNameSegment(v17, Src, &v26);
          if ( NextNameSegment < 0 )
            break;
          NextNameSegment = GetNameSpaceObject(Src, v9, (__int64 *)&v24, 0);
          if ( NextNameSegment < 0 )
          {
            v8 = v24;
            goto LABEL_19;
          }
          v19 = CreateNameSpaceObject(v30, Src, v10, v29, &v23, 0x20000);
          v8 = v24;
          NextNameSegment = v19;
          v20 = v23;
          if ( v19 < 0 )
          {
            if ( v19 != -1073741771 )
              goto LABEL_17;
            NextNameSegment = 0;
          }
          else
          {
            v21 = v23;
            *(_WORD *)(v23 + 64) |= 0xA00u;
            SetClearAssociatedNativeObject(v8, v21);
          }
          DereferenceObjectEx(v10);
          v23 = 0LL;
          v10 = v20;
          DereferenceObjectEx(v9);
          v17 = v26;
          v9 = v8;
          v8 = 0LL;
          v24 = 0LL;
          if ( !v26 )
            goto LABEL_17;
        }
        if ( NextNameSegment == -1073741197 )
          NextNameSegment = 0;
      }
LABEL_17:
      if ( NextNameSegment >= 0 )
      {
        *v31 = v10;
        v10 = 0LL;
      }
LABEL_19:
      ExFreePoolWithTag(ObjectPath, 0);
    }
    else
    {
      NextNameSegment = -1073741670;
    }
  }
  if ( v12 )
    DereferenceObjectEx(v12);
  if ( v9 )
    DereferenceObjectEx(v9);
  if ( v10 )
    DereferenceObjectEx(v10);
  if ( v8 )
    DereferenceObjectEx(v8);
  return (unsigned int)NextNameSegment;
}
