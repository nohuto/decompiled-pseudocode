/*
 * XREFs of ACPIThermalGetSensorDevice @ 0x1C0007E58
 * Callers:
 *     ACPIThermalStartDevice @ 0x1C0091630 (ACPIThermalStartDevice.c)
 * Callees:
 *     ACPIInternalDecrementIrpReferenceCount @ 0x1C000A814 (ACPIInternalDecrementIrpReferenceCount.c)
 *     AMLIDereferenceHandleEx @ 0x1C001145C (AMLIDereferenceHandleEx.c)
 *     AMLIEvalNameSpaceObject @ 0x1C00116EC (AMLIEvalNameSpaceObject.c)
 *     FreeDataBuffs @ 0x1C0013E30 (FreeDataBuffs.c)
 *     AMLIGetNamedChild @ 0x1C0015140 (AMLIGetNamedChild.c)
 *     AMLIGetNameSpaceObject @ 0x1C001A858 (AMLIGetNameSpaceObject.c)
 *     __security_check_cookie @ 0x1C0031700 (__security_check_cookie.c)
 *     memset @ 0x1C0031D40 (memset.c)
 *     ACPIAmliEvaluateDsm @ 0x1C0093754 (ACPIAmliEvaluateDsm.c)
 */

__int64 __fastcall ACPIThermalGetSensorDevice(_QWORD *a1)
{
  __int64 v2; // rcx
  __int64 v3; // rdi
  __int64 v4; // rax
  int v5; // ebx
  __int64 v7; // rcx
  int v8; // eax
  void **v9; // r13
  int v10; // eax
  PVOID P; // [rsp+70h] [rbp-90h]
  __int64 v12; // [rsp+78h] [rbp-88h]
  void *FileHandle; // [rsp+80h] [rbp-80h]
  PVOID v14[2]; // [rsp+88h] [rbp-78h] BYREF
  __int64 v15; // [rsp+A0h] [rbp-60h]
  struct _UNICODE_STRING DestinationString; // [rsp+A8h] [rbp-58h]
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+B8h] [rbp-48h]
  struct _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+C8h] [rbp-38h] BYREF
  __int128 v19; // [rsp+100h] [rbp+0h] BYREF
  _BYTE v20[40]; // [rsp+110h] [rbp+10h] BYREF
  _BYTE v21[48]; // [rsp+138h] [rbp+38h] BYREF

  v14[1] = a1;
  *(_QWORD *)&DestinationString.Length = 0LL;
  DestinationString.Buffer = 0LL;
  memset(v21, 0, sizeof(v21));
  IoStatusBlock.Pointer = 0LL;
  IoStatusBlock.Information = 0LL;
  memset(&ObjectAttributes, 0, sizeof(ObjectAttributes));
  memset(v20, 0, sizeof(v20));
  v2 = a1[89];
  P = 0LL;
  FileHandle = 0LL;
  v12 = 0LL;
  v3 = a1[25];
  v14[0] = 0LL;
  v4 = AMLIGetNamedChild(v2, 1314083935LL);
  v15 = v4;
  if ( v4 )
  {
    v8 = AMLIEvalNameSpaceObject(v4, v20, 0LL, 0LL);
    v9 = (void **)v20;
  }
  else
  {
    if ( (*(_DWORD *)(v3 + 128) & 4) == 0 )
    {
      v5 = 0;
      *(_QWORD *)(v3 + 208) = *(_QWORD *)(v3 + 192);
      *(_QWORD *)(v3 + 216) = *(_QWORD *)(v3 + 200);
      goto LABEL_4;
    }
    v7 = a1[89];
    v19 = THRM_EXTENSIONS_DSM_UUID;
    v8 = ACPIAmliEvaluateDsm(v7, (unsigned int)&v19, 0, 2, (__int64)v21, (__int64)v14);
    v9 = (void **)v14[0];
  }
  v5 = v8;
  if ( v8 >= 0 )
  {
    if ( *((_WORD *)v9 + 1) == 2 )
    {
      v10 = AMLIGetNameSpaceObject(v9[4]);
      dword_1C0082858 = 0;
      pszDest = 0;
      v5 = v10;
      FreeDataBuffs(v9, 1LL);
      if ( v5 >= 0 )
        v5 = -1073741810;
    }
    else
    {
      dword_1C0082858 = 0;
      pszDest = 0;
      v5 = -1072431095;
      FreeDataBuffs(v9, 1LL);
    }
  }
  if ( v15 )
    AMLIDereferenceHandleEx(v15);
  if ( v12 )
    AMLIDereferenceHandleEx(v12);
LABEL_4:
  if ( FileHandle )
    ZwClose(FileHandle);
  if ( v14[0] )
    ExFreePoolWithTag(v14[0], 0x52706341u);
  return (unsigned int)v5;
}
