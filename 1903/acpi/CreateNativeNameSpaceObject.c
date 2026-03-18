/*
 * XREFs of CreateNativeNameSpaceObject @ 0x1C0006870
 * Callers:
 *     InitializeNativeNamespace @ 0x1C00067B8 (InitializeNativeNamespace.c)
 *     AMLICreateNativeNamespaceObject @ 0x1C0063E84 (AMLICreateNativeNamespaceObject.c)
 * Callees:
 *     SetClearAssociatedNativeObject @ 0x1C0006ACC (SetClearAssociatedNativeObject.c)
 *     GetNextNameSegment @ 0x1C0006B44 (GetNextNameSegment.c)
 *     GetObjectPath @ 0x1C0006C18 (GetObjectPath.c)
 *     FreeNameSpaceObjects @ 0x1C00137D0 (FreeNameSpaceObjects.c)
 *     DereferenceObjectEx @ 0x1C0013B20 (DereferenceObjectEx.c)
 *     CreateNameSpaceObject @ 0x1C0017B60 (CreateNameSpaceObject.c)
 *     GetNameSpaceObject @ 0x1C001AD04 (GetNameSpaceObject.c)
 *     __security_check_cookie @ 0x1C0031700 (__security_check_cookie.c)
 */

__int64 __fastcall CreateNativeNameSpaceObject(
        __int64 a1,
        void *a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        __int64 *a8)
{
  __int64 v8; // rsi
  __int64 v9; // r15
  __int64 v10; // r12
  int NameSpaceObject; // ebx
  _BYTE *ObjectPath; // r13
  bool v13; // zf
  _BYTE *v14; // r15
  void *v15; // rdi
  int v16; // eax
  __int64 v17; // rdi
  __int64 v18; // rdx
  __int64 v20; // [rsp+30h] [rbp-59h] BYREF
  __int64 v21; // [rsp+38h] [rbp-51h]
  __int64 v22; // [rsp+40h] [rbp-49h]
  _BYTE *v23; // [rsp+48h] [rbp-41h] BYREF
  __int64 v24; // [rsp+50h] [rbp-39h]
  __int64 v25; // [rsp+58h] [rbp-31h]
  __int64 v26; // [rsp+60h] [rbp-29h]
  __int64 v27; // [rsp+68h] [rbp-21h]
  __int64 *v28; // [rsp+70h] [rbp-19h]
  _BYTE Src[8]; // [rsp+78h] [rbp-11h] BYREF

  v28 = a8;
  v26 = gpNativeNameSpaceOwner;
  v8 = 0LL;
  v25 = gpnsNativeNameSpaceOverrideRoot;
  v9 = 0LL;
  v10 = 0LL;
  v27 = gpheapGlobal;
  v24 = gpnsNameSpaceRoot;
  v21 = 0LL;
  v20 = 0LL;
  v22 = 0LL;
  NameSpaceObject = GetNameSpaceObject(a2);
  if ( NameSpaceObject >= 0 )
  {
    ObjectPath = (_BYTE *)GetObjectPath(v22);
    if ( ObjectPath )
    {
      DereferenceObjectEx(0LL);
      v13 = *ObjectPath == 92;
      v22 = 0LL;
      v14 = ObjectPath;
      v15 = ObjectPath;
      v23 = ObjectPath;
      if ( v13 )
      {
        v15 = ObjectPath + 1;
        v23 = ObjectPath + 1;
        v14 = ObjectPath + 1;
      }
      NameSpaceObject = GetNameSpaceObject(v15);
      if ( NameSpaceObject >= 0 )
      {
        FreeNameSpaceObjects(v20);
        v20 = 0LL;
      }
      if ( (gdwfAMLI & 4) != 0 )
      {
        _InterlockedIncrement((volatile signed __int32 *)(v24 + 112));
        v8 = v21;
        v15 = v23;
      }
      Src[4] = 0;
      v10 = v25;
      if ( (gdwfAMLI & 4) != 0 )
      {
        _InterlockedIncrement((volatile signed __int32 *)(v25 + 112));
        v8 = v21;
        v15 = v23;
      }
      v13 = v14 == 0LL;
      v9 = v24;
      if ( !v13 )
      {
        while ( 1 )
        {
          NameSpaceObject = GetNextNameSegment(v15, Src, &v23);
          if ( NameSpaceObject < 0 )
            break;
          NameSpaceObject = GetNameSpaceObject(Src);
          if ( NameSpaceObject < 0 )
          {
            v8 = v21;
            goto LABEL_19;
          }
          v16 = CreateNameSpaceObject(v27, Src, v10, v26, &v20, 0x20000);
          v8 = v21;
          NameSpaceObject = v16;
          v17 = v20;
          if ( v16 < 0 )
          {
            if ( v16 != -1073741771 )
              goto LABEL_17;
            NameSpaceObject = 0;
          }
          else
          {
            v18 = v20;
            *(_WORD *)(v20 + 64) |= 0xA00u;
            SetClearAssociatedNativeObject(v8, v18);
          }
          DereferenceObjectEx(v10);
          v20 = 0LL;
          v10 = v17;
          DereferenceObjectEx(v9);
          v15 = v23;
          v9 = v8;
          v8 = 0LL;
          v21 = 0LL;
          if ( !v23 )
            goto LABEL_17;
        }
        if ( NameSpaceObject == -1073741197 )
          NameSpaceObject = 0;
      }
LABEL_17:
      if ( NameSpaceObject >= 0 )
      {
        *v28 = v10;
        v10 = 0LL;
      }
LABEL_19:
      ExFreePoolWithTag(ObjectPath, 0);
    }
    else
    {
      NameSpaceObject = -1073741670;
    }
  }
  if ( v9 )
    DereferenceObjectEx(v9);
  if ( v10 )
    DereferenceObjectEx(v10);
  if ( v8 )
    DereferenceObjectEx(v8);
  return (unsigned int)NameSpaceObject;
}
