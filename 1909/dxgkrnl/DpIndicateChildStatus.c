/*
 * XREFs of DpIndicateChildStatus @ 0x1C0049FB0
 * Callers:
 *     DpiMiracastTearDownAssociation @ 0x1C004DCB0 (DpiMiracastTearDownAssociation.c)
 * Callees:
 *     ?IsInternalVideoOutput@@YAEW4_D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY@@@Z @ 0x1C0003E4C (-IsInternalVideoOutput@@YAEW4_D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY@@@Z.c)
 *     DpiFdoQueueConnectionChangePackage @ 0x1C001E974 (DpiFdoQueueConnectionChangePackage.c)
 *     DpiFdoInitializeConnectionChangePackage @ 0x1C001EA30 (DpiFdoInitializeConnectionChangePackage.c)
 *     __security_check_cookie @ 0x1C0023340 (__security_check_cookie.c)
 *     memset @ 0x1C0025440 (memset.c)
 *     McTemplateK0pqtqq @ 0x1C0035958 (McTemplateK0pqtqq.c)
 */

__int64 __fastcall DpIndicateChildStatus(__int64 a1, unsigned int *a2, const GUID *a3)
{
  unsigned int v3; // edi
  unsigned int *v4; // rsi
  __int64 v5; // r14
  char v6; // r15
  enum _D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY v7; // ebp
  __int64 v8; // rbx
  _QWORD *v9; // r12
  bool v10; // zf
  __int64 v11; // rbx
  __int64 v12; // rax
  _QWORD *v14; // rax
  _QWORD *v15; // rax
  _QWORD v16[10]; // [rsp+40h] [rbp-88h] BYREF

  v3 = 0;
  v4 = a2;
  v5 = a1;
  v6 = 0;
  v7 = D3DKMDT_VOT_UNINITIALIZED;
  if ( !a1 )
    goto LABEL_18;
  if ( !a2 )
    goto LABEL_18;
  v8 = *(_QWORD *)(a1 + 64);
  if ( !v8 || *(_DWORD *)(v8 + 16) != 1953656900 || *(_DWORD *)(v8 + 20) != 2 )
    goto LABEL_18;
  v9 = v16;
  memset(v16, 0, 0x48uLL);
  EtwActivityIdControl(3u, (LPGUID)&v16[1]);
  a2 = (unsigned int *)*v4;
  a1 = (unsigned int)a2;
  v16[8] = MEMORY[0xFFFFF78000000014];
  LODWORD(v16[4]) = (_DWORD)a2;
  LODWORD(v16[3]) = 12;
  LOBYTE(v16[6]) = -1;
  if ( *(_QWORD *)(v8 + 5528) )
    v9 = *(_QWORD **)(v8 + 5528);
  if ( !(_DWORD)a2 )
  {
    if ( !*(_BYTE *)(v8 + 1155) )
      return v3;
    v6 = 1;
LABEL_31:
    if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x40000) != 0 )
      McTemplateK0pqtqq(
        a1,
        &EventDxgkCbIndicateChildStatus,
        a3,
        v5,
        v4[1],
        (_DWORD)a2,
        *((unsigned __int8 *)v4 + 8),
        v7);
    v15 = DpiFdoInitializeConnectionChangePackage(
            (__int64)v9,
            v4[1],
            *((_BYTE *)v4 + 8) != 0 ? 10 : 8,
            v7,
            0,
            *(_BYTE *)(v8 + 1160) == 0,
            v6,
            0);
    if ( v15 )
      return (unsigned int)DpiFdoQueueConnectionChangePackage(v8, v15, 1);
    else
      return (unsigned int)-1073741670;
  }
  a1 = (unsigned int)((_DWORD)a2 - 1);
  if ( (_DWORD)a2 == 1 )
  {
    v10 = *(_DWORD *)(v8 + 3224) == v4[1];
LABEL_17:
    if ( v10 )
      goto LABEL_18;
    goto LABEL_31;
  }
  a1 = (unsigned int)((_DWORD)a2 - 2);
  if ( (_DWORD)a2 == 2 )
  {
    v14 = (_QWORD *)WdLogNewEntry5_WdEvent();
    v14[3] = v4[1];
    v14[4] = *(_QWORD *)(v8 + 24);
    v14[5] = *((unsigned __int8 *)v4 + 8);
    WdLogEvent5_WdEvent(v14);
    return v3;
  }
  if ( (_DWORD)a2 == 3 )
  {
    if ( *(_BYTE *)(v8 + 1159) && *(_DWORD *)(v8 + 3224) == -1 )
    {
      if ( !*(_BYTE *)(v8 + 2692) && IsInternalVideoOutput((enum _D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY)v4[3]) )
        goto LABEL_18;
      v7 = v4[3];
      v10 = v7 == D3DKMDT_VOT_MIRACAST;
    }
    else
    {
      if ( !*(_QWORD *)(v8 + 3232) )
      {
        v11 = -1073741637LL;
        goto LABEL_19;
      }
      if ( *(_DWORD *)(v8 + 3224) != v4[1]
        || (v7 = v4[3], IsInternalVideoOutput(v7))
        || v7 == D3DKMDT_VOT_INDIRECT_WIRED )
      {
LABEL_18:
        v11 = -1073741811LL;
LABEL_19:
        v3 = v11;
        v12 = WdLogNewEntry5_WdError(a1, a2, a3);
        *(_QWORD *)(v12 + 24) = v11;
        WdLogEvent5_WdError(v12);
        return v3;
      }
      v10 = v7 == (D3DKMDT_VOT_SVIDEO_7PIN|D3DKMDT_VOT_INDIRECT_WIRED);
    }
    goto LABEL_17;
  }
  return v3;
}
