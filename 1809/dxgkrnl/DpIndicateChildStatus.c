/*
 * XREFs of DpIndicateChildStatus @ 0x1C0042AB0
 * Callers:
 *     DpiMiracastTearDownAssociation @ 0x1C00471B8 (DpiMiracastTearDownAssociation.c)
 * Callees:
 *     ?IsInternalVideoOutput@@YAEW4_D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY@@@Z @ 0x1C000411C (-IsInternalVideoOutput@@YAEW4_D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY@@@Z.c)
 *     __security_check_cookie @ 0x1C0020760 (__security_check_cookie.c)
 *     memset @ 0x1C00231C0 (memset.c)
 *     McTemplateK0pqqqq @ 0x1C002FFF8 (McTemplateK0pqqqq.c)
 *     DpiFdoInitializeConnectionChangePackage @ 0x1C00444DC (DpiFdoInitializeConnectionChangePackage.c)
 *     DpiFdoQueueConnectionChangePackage @ 0x1C0044628 (DpiFdoQueueConnectionChangePackage.c)
 */

__int64 __fastcall DpIndicateChildStatus(__int64 a1, unsigned int *a2)
{
  unsigned int v2; // edi
  __int64 v4; // r14
  char v5; // r15
  enum _D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY v6; // ebp
  __int64 v7; // rbx
  _QWORD *v8; // r12
  const GUID *v9; // r8
  int v10; // edx
  bool v11; // zf
  __int64 v12; // rbx
  __int64 v13; // rax
  _QWORD *v15; // rax
  __int64 v16; // rax
  __int64 v17; // r8
  _QWORD v18[10]; // [rsp+40h] [rbp-88h] BYREF

  v2 = 0;
  v4 = a1;
  v5 = 0;
  v6 = D3DKMDT_VOT_UNINITIALIZED;
  if ( !a1 )
    goto LABEL_18;
  if ( !a2 )
    goto LABEL_18;
  v7 = *(_QWORD *)(a1 + 64);
  if ( !v7 || *(_DWORD *)(v7 + 16) != 1953656900 || *(_DWORD *)(v7 + 20) != 2 )
    goto LABEL_18;
  v8 = v18;
  memset(v18, 0, 0x48uLL);
  EtwActivityIdControl(3u, (LPGUID)&v18[1]);
  v10 = *a2;
  a1 = *a2;
  v18[8] = MEMORY[0xFFFFF78000000014];
  LODWORD(v18[4]) = v10;
  LODWORD(v18[3]) = 12;
  LOBYTE(v18[6]) = -1;
  if ( *(_QWORD *)(v7 + 5400) )
    v8 = *(_QWORD **)(v7 + 5400);
  if ( !v10 )
  {
    if ( !*(_BYTE *)(v7 + 1147) )
      return v2;
    v5 = 1;
LABEL_31:
    if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x40000) != 0 )
      McTemplateK0pqqqq(a1, &EventDxgkCbIndicateChildStatus, v9, v4, a2[1], v10, *((unsigned __int8 *)a2 + 8), v6);
    v16 = DpiFdoInitializeConnectionChangePackage(
            (_DWORD)v8,
            a2[1],
            *((_BYTE *)a2 + 8) != 0 ? 10 : 8,
            v6,
            0,
            *(_BYTE *)(v7 + 1152) == 0,
            v5,
            0);
    if ( v16 )
    {
      LOBYTE(v17) = 1;
      return (unsigned int)DpiFdoQueueConnectionChangePackage(v7, v16, v17);
    }
    else
    {
      return (unsigned int)-1073741670;
    }
  }
  a1 = (unsigned int)(a1 - 1);
  if ( !(_DWORD)a1 )
  {
    v11 = *(_DWORD *)(v7 + 3152) == a2[1];
LABEL_17:
    if ( v11 )
      goto LABEL_18;
    goto LABEL_31;
  }
  a1 = (unsigned int)(a1 - 1);
  if ( !(_DWORD)a1 )
  {
    v15 = (_QWORD *)WdLogNewEntry5_WdEvent();
    v15[3] = a2[1];
    v15[4] = *(_QWORD *)(v7 + 24);
    v15[5] = *((unsigned __int8 *)a2 + 8);
    WdLogEvent5_WdEvent(v15);
    return v2;
  }
  if ( (_DWORD)a1 == 1 )
  {
    if ( *(_BYTE *)(v7 + 1151) && *(_DWORD *)(v7 + 3152) == -1 )
    {
      if ( !*(_BYTE *)(v7 + 2620) && IsInternalVideoOutput((enum _D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY)a2[3]) )
        goto LABEL_18;
      v6 = a2[3];
      v11 = v6 == D3DKMDT_VOT_MIRACAST;
    }
    else
    {
      if ( !*(_QWORD *)(v7 + 3160) )
      {
        v12 = -1073741637LL;
        goto LABEL_19;
      }
      if ( *(_DWORD *)(v7 + 3152) != a2[1]
        || (v6 = a2[3], IsInternalVideoOutput(v6))
        || v6 == D3DKMDT_VOT_INDIRECT_WIRED )
      {
LABEL_18:
        v12 = -1073741811LL;
LABEL_19:
        v2 = v12;
        v13 = WdLogNewEntry5_WdError(a1);
        *(_QWORD *)(v13 + 24) = v12;
        WdLogEvent5_WdError(v13);
        return v2;
      }
      v11 = v6 == (D3DKMDT_VOT_SVIDEO_7PIN|D3DKMDT_VOT_INDIRECT_WIRED);
    }
    goto LABEL_17;
  }
  return v2;
}
