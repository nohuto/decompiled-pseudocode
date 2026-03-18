/*
 * XREFs of AMLICreateNativeNamespaceObject @ 0x1C0061EF8
 * Callers:
 *     AcpiReflectNativeObject @ 0x1C0059740 (AcpiReflectNativeObject.c)
 * Callees:
 *     FreeObjData @ 0x1C0002EB0 (FreeObjData.c)
 *     DereferenceObjectEx @ 0x1C00038B0 (DereferenceObjectEx.c)
 *     CreateNameSpaceObject @ 0x1C0006190 (CreateNameSpaceObject.c)
 *     NewObjData @ 0x1C000A678 (NewObjData.c)
 *     GetNameSpaceObject @ 0x1C0021288 (GetNameSpaceObject.c)
 *     CreateNativeNameSpaceObject @ 0x1C00229A0 (CreateNativeNameSpaceObject.c)
 *     __security_check_cookie @ 0x1C0030A80 (__security_check_cookie.c)
 *     memset @ 0x1C00310C0 (memset.c)
 *     AMLIGetValidNamespaceName @ 0x1C0062B30 (AMLIGetValidNamespaceName.c)
 */

__int64 __fastcall AMLICreateNativeNamespaceObject(
        int a1,
        int a2,
        __int64 *a3,
        unsigned int a4,
        unsigned int a5,
        _BYTE *a6)
{
  unsigned __int64 v6; // rdi
  _BYTE *v7; // rsi
  int valid; // ebx
  int v12; // edx
  __int64 v13; // r14
  __int64 v14; // r8
  __int64 v15; // r9
  _BYTE *v16; // rax
  int NameSpaceObject; // eax
  __int64 v18; // rdx
  __int64 v19; // r8
  __int64 v20; // r9
  unsigned __int64 v21; // rdi
  __int16 v22; // cx
  __int128 v24; // xmm1
  __int64 v25; // [rsp+28h] [rbp-49h]
  __int64 v26; // [rsp+30h] [rbp-41h]
  __int64 v27; // [rsp+38h] [rbp-39h]
  unsigned __int64 v28; // [rsp+48h] [rbp-29h] BYREF
  unsigned __int64 v29; // [rsp+50h] [rbp-21h] BYREF
  _BYTE v30[40]; // [rsp+58h] [rbp-19h] BYREF
  int Src; // [rsp+80h] [rbp+Fh] BYREF
  char v32; // [rsp+84h] [rbp+13h]

  v6 = 0LL;
  v7 = 0LL;
  v28 = 0LL;
  if ( ((a1 - 6) & 0xFFFFFFFD) != 0 )
    return (unsigned int)-1073741637;
  Src = a2;
  v32 = 0;
  valid = AMLIGetValidNamespaceName(&Src, 0LL);
  if ( valid < 0 )
    return (unsigned int)valid;
  v13 = *a3;
  if ( !v13 )
    return (unsigned int)-1073741823;
  memset(v30, v12, sizeof(v30));
  *(_WORD *)&v30[2] = 8;
  *(_DWORD *)&v30[24] = 200;
  if ( a1 == 8 )
  {
    if ( a4 > 7 || a5 > 1 )
      return (unsigned int)-1073741637;
    v16 = (_BYTE *)NewObjData((struct _SLIST_ENTRY *)gpheapGlobal, (__int64)v30, v14, v15);
    v7 = v16;
    if ( !v16 )
      return (unsigned int)-1073741670;
    memset(v16, 0, 0xC8uLL);
  }
  *a6 = 0;
  NameSpaceObject = GetNameSpaceObject(&Src, v13, (__int64 *)&v29, 0);
  valid = NameSpaceObject;
  if ( NameSpaceObject < 0 )
  {
    if ( NameSpaceObject != -1073741772 )
      goto LABEL_26;
    valid = CreateNameSpaceObject(
              gpheapGlobal,
              (unsigned __int8 *)&Src,
              v13,
              (struct _EX_RUNDOWN_REF *)gpNativeNameSpaceOwner,
              &v28,
              0x20000);
  }
  else
  {
    v19 = 8LL;
    if ( a1 != 8 || (v21 = v29, v18 = 1LL, v22 = *(_WORD *)(v29 + 66), (unsigned __int16)(v22 - 1) > 3u) && v22 != 8 )
    {
      valid = -1073741823;
      goto LABEL_19;
    }
    if ( (*(_WORD *)(v29 + 64) & 0x180) != 0 )
    {
      valid = -1073741823;
      *a6 = 1;
      goto LABEL_19;
    }
    valid = CreateNativeNameSpaceObject(384LL, &Src, v13, v20, v25, v26, v27, (__int64 *)&v28);
    DereferenceObjectEx(v21);
  }
  v6 = v28;
LABEL_26:
  if ( valid >= 0 )
  {
    if ( a1 == 8 )
    {
      v24 = *(_OWORD *)&v30[16];
      *(_OWORD *)(v6 + 64) = *(_OWORD *)v30;
      *(_OWORD *)(v6 + 80) = v24;
      *(_QWORD *)(v6 + 96) = v7;
      v7[193] = a4 & 7;
      if ( a5 )
        v7[192] = 1;
    }
    else
    {
      *(_WORD *)(v6 + 66) = 6;
    }
    *(_WORD *)(v6 + 64) |= 0x200u;
    DereferenceObjectEx(v6);
    return (unsigned int)valid;
  }
LABEL_19:
  if ( v7 )
  {
    *(_QWORD *)&v30[32] = v7;
    FreeObjData((__int64)v30, v18, v19, v20);
  }
  return (unsigned int)valid;
}
