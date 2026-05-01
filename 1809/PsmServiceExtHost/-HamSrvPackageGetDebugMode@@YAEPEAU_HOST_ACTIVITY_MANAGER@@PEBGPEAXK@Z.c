/*
 * XREFs of ?HamSrvPackageGetDebugMode@@YAEPEAU_HOST_ACTIVITY_MANAGER@@PEBGPEAXK@Z @ 0x180007920
 * Callers:
 *     PsmHamGetPackageDebugMode @ 0x1800078F0 (PsmHamGetPackageDebugMode.c)
 * Callees:
 *     ?HampPkgFindInManager@@YAPEAU_HAM_PACKAGE@@PEAU_HOST_ACTIVITY_MANAGER@@PEAU_HAM_PACKAGE_INFO@@@Z @ 0x180007D50 (-HampPkgFindInManager@@YAPEAU_HAM_PACKAGE@@PEAU_HOST_ACTIVITY_MANAGER@@PEAU_HAM_PACKAGE_INFO@@@Z.c)
 *     CemRcObjectDereference @ 0x180008620 (CemRcObjectDereference.c)
 *     __security_check_cookie @ 0x180048190 (__security_check_cookie.c)
 *     memset_0 @ 0x180049A1A (memset_0.c)
 */

_BOOL8 __fastcall HamSrvPackageGetDebugMode(struct _HOST_ACTIVITY_MANAGER *a1, char *a2, void *a3, int a4)
{
  DWORD v8; // ebx
  _WORD *v9; // rax
  __int64 v10; // rdx
  __int16 v11; // cx
  struct _HAM_PACKAGE *v12; // rsi
  DWORD v13; // edi
  _QWORD *Value; // rbx
  bool v15; // bl
  _QWORD *v16; // rax
  bool v18; // dl
  DWORD v19; // ebx
  const WCHAR *v20; // rcx
  __int64 v21; // rax
  bool v23; // [rsp+30h] [rbp-D0h] BYREF
  int v24; // [rsp+34h] [rbp-CCh] BYREF
  EVENT_DESCRIPTOR EventDescriptor; // [rsp+38h] [rbp-C8h] BYREF
  EVENT_DESCRIPTOR v26; // [rsp+48h] [rbp-B8h] BYREF
  _BYTE v27[132]; // [rsp+60h] [rbp-A0h] BYREF
  char DestinationSid[68]; // [rsp+E4h] [rbp-1Ch] BYREF
  int v29; // [rsp+128h] [rbp+28h]
  _BYTE TlsValue[144]; // [rsp+130h] [rbp+30h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+1C0h] [rbp+C0h] BYREF
  void *v32; // [rsp+1D0h] [rbp+D0h]
  int v33; // [rsp+1D8h] [rbp+D8h]
  int v34; // [rsp+1DCh] [rbp+DCh]
  struct _EVENT_DATA_DESCRIPTOR v35; // [rsp+1E0h] [rbp+E0h] BYREF
  void *v36; // [rsp+1F0h] [rbp+F0h]
  int v37; // [rsp+1F8h] [rbp+F8h]
  int v38; // [rsp+1FCh] [rbp+FCh]
  const WCHAR *v39; // [rsp+200h] [rbp+100h]
  int v40; // [rsp+208h] [rbp+108h]
  int v41; // [rsp+20Ch] [rbp+10Ch]
  int *v42; // [rsp+210h] [rbp+110h]
  __int64 v43; // [rsp+218h] [rbp+118h]
  void *v44; // [rsp+220h] [rbp+120h]
  int v45; // [rsp+228h] [rbp+128h]
  int v46; // [rsp+22Ch] [rbp+12Ch]
  bool *v47; // [rsp+230h] [rbp+130h]
  __int64 v48; // [rsp+238h] [rbp+138h]

  if ( hProvider > 4u )
  {
    *(_DWORD *)&EventDescriptor.Level = 260;
    UserData.Ptr = (ULONGLONG)off_18009B0F8;
    *(_DWORD *)&EventDescriptor.Id = ((unsigned int)&unk_18008A38B - (unsigned int)&TraceLoggingMetadata) | 0xB000000;
    EventDescriptor.Keyword = 0LL;
    UserData.Size = *(unsigned __int16 *)off_18009B0F8;
    v32 = &unk_18008A396;
    UserData.Reserved = 2;
    v33 = 24;
    v34 = 1;
    EventWriteTransfer(RegHandle, &EventDescriptor, 0LL, 0LL, 2u, &UserData);
  }
  memset_0(TlsValue, 0, 0x88uLL);
  v8 = HampLockTrackerId;
  if ( HampLockTrackerId != -1 )
  {
    if ( TlsGetValue(HampLockTrackerId) )
      __int2c();
    TlsSetValue(v8, TlsValue);
  }
  memset_0(v27, 0, 0xCCuLL);
  v9 = v27;
  v10 = 65LL;
  while ( v10 != -2147483581 )
  {
    v11 = *(_WORD *)((char *)v9 + a2 - v27);
    if ( !v11 )
      break;
    *v9++ = v11;
    if ( !--v10 )
    {
      --v9;
      break;
    }
  }
  *v9 = 0;
  RtlCopySid(0x44u, DestinationSid, a3);
  v29 = a4;
  v12 = HampPkgFindInManager(a1, (struct _HAM_PACKAGE_INFO *)v27);
  if ( v12 )
  {
    v13 = HampLockTrackerId;
    if ( HampLockTrackerId != -1 )
    {
      Value = TlsGetValue(HampLockTrackerId);
      if ( (*(_QWORD *)TlsGetValue(v13) & 0xFFFFFFFFFFFFFFC0uLL) != 0 )
        __int2c();
      *Value |= 0x40uLL;
      ++Value[7];
    }
    RtlAcquireSRWLockShared((char *)v12 + 304);
    v15 = (*((_DWORD *)v12 + 85) & 2) != 0;
    if ( HampLockTrackerId != -1 )
    {
      v16 = TlsGetValue(HampLockTrackerId);
      if ( (*(_BYTE *)v16 & 0x40) == 0 )
        __int2c();
      if ( v16[7]-- == 1LL )
        *v16 &= ~0x40uLL;
    }
    RtlReleaseSRWLockShared((char *)v12 + 304);
    v23 = v15;
    CemRcObjectDereference(v12);
    v18 = v15;
  }
  else
  {
    v18 = 0;
    v23 = 0;
  }
  v19 = HampLockTrackerId;
  if ( HampLockTrackerId != -1 )
  {
    if ( *(_QWORD *)TlsGetValue(HampLockTrackerId) )
      __int2c();
    TlsSetValue(v19, 0LL);
    v18 = v23;
  }
  if ( hProvider <= 4u || (byte_18009B100 & 8) == 0 || (qword_18009B108 & 8) != qword_18009B108 )
    return v18;
  v20 = &pwsz;
  LODWORD(v21) = 0;
  if ( a2 )
  {
    v20 = (const WCHAR *)a2;
    v21 = -1LL;
    do
      ++v21;
    while ( *(_WORD *)&a2[2 * v21] );
  }
  v39 = v20;
  v40 = 2 * v21 + 2;
  v42 = &v24;
  LOBYTE(v21) = *((_BYTE *)a3 + 1);
  v41 = 0;
  v24 = a4;
  v43 = 4LL;
  if ( (unsigned __int8)v21 > 0xFu )
    LODWORD(v21) = 15;
  else
    LODWORD(v21) = (unsigned __int8)v21;
  v44 = a3;
  v45 = 4 * v21 + 8;
  v47 = &v23;
  v46 = 0;
  v48 = 1LL;
  *(_DWORD *)&v26.Level = 516;
  v35.Ptr = (ULONGLONG)off_18009B0F8;
  *(_DWORD *)&v26.Id = ((unsigned int)&unk_18008A771 - (unsigned int)&TraceLoggingMetadata) | 0xB000000;
  v26.Keyword = 8LL;
  v35.Size = *(unsigned __int16 *)off_18009B0F8;
  v36 = &unk_18008A77C;
  v35.Reserved = 2;
  v37 = 72;
  v38 = 1;
  EventWriteTransfer(RegHandle, &v26, 0LL, 0LL, 6u, &v35);
  return v23;
}
