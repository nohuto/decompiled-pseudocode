/*
 * XREFs of DxgkNetDispStopMiracastDisplayDevice @ 0x1C0203B60
 * Callers:
 *     <none>
 * Callees:
 *     ?RtlStringCchLengthW@@YAJPEBG_KPEA_K@Z @ 0x1C0002838 (-RtlStringCchLengthW@@YAJPEBG_KPEA_K@Z.c)
 *     ??_V@YAXPEAX@Z @ 0x1C000C340 (--_V@YAXPEAX@Z.c)
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C000C364 (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     memmove @ 0x1C0024FC0 (memmove.c)
 *     ?DxgkNetDispAccessCheck@@YAJPEAVDXGPROCESS@@@Z @ 0x1C003ABE0 (-DxgkNetDispAccessCheck@@YAJPEAVDXGPROCESS@@@Z.c)
 *     ?IsAllowedToCallMiracast@@YA_NXZ @ 0x1C003B264 (-IsAllowedToCallMiracast@@YA_NXZ.c)
 *     DxgkMiracastStopMiracastSession @ 0x1C004F610 (DxgkMiracastStopMiracastSession.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C01008A0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 */

__int64 __fastcall DxgkNetDispStopMiracastDisplayDevice(unsigned __int16 *a1, HANDLE Handle)
{
  WCHAR *v4; // rsi
  struct _KEVENT *v5; // r13
  __int64 v6; // rdx
  __int64 v7; // rcx
  struct DXGPROCESS *Current; // rax
  __int64 v10; // rdx
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  unsigned int v14; // ebx
  __int64 v15; // rax
  int v16; // eax
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // r8
  __int64 v20; // r12
  __int64 v21; // rax
  unsigned __int64 v22; // rbx
  SIZE_T v23; // rax
  WCHAR *v24; // rax
  __int64 v25; // rdx
  __int64 v26; // rcx
  __int64 v27; // r8
  __int64 v28; // r9
  __int64 v29; // rax
  size_t v30; // rbx
  NTSTATUS v31; // eax
  __int64 v32; // rdx
  __int64 v33; // rcx
  __int64 v34; // r8
  __int64 v35; // rax
  PVOID Object[2]; // [rsp+40h] [rbp-38h] BYREF
  unsigned __int64 v37; // [rsp+98h] [rbp+20h] BYREF

  v4 = 0LL;
  v5 = 0LL;
  Object[1] = 0LL;
  if ( !IsAllowedToCallMiracast() )
    return 2147483656LL;
  Current = DXGPROCESS::GetCurrent(v7, v6);
  if ( (int)DxgkNetDispAccessCheck(Current, v10) >= 0 )
  {
    v37 = 520LL;
    if ( ((unsigned __int8)a1 & 1) != 0 )
      ExRaiseDatatypeMisalignment();
    if ( (unsigned __int64)(a1 + 260) > MmUserProbeAddress || a1 + 260 < a1 )
      *(_BYTE *)MmUserProbeAddress = 0;
    v16 = RtlStringCchLengthW(a1, 0x208uLL, &v37);
    v20 = v16;
    if ( v16 >= 0 )
    {
      v22 = v37;
      v23 = 2 * (v37 + 1);
      if ( !is_mul_ok(v37 + 1, 2uLL) )
        v23 = -1LL;
      v24 = (WCHAR *)operator new[](v23, 0x4B677844u, PagedPool);
      v4 = v24;
      if ( v24 )
      {
        v30 = v22;
        memmove(v24, a1, v30 * 2);
        v4[v30] = 0;
        if ( Handle
          && (v31 = ObReferenceObjectByHandle(Handle, 0x1F0003u, (POBJECT_TYPE)ExEventObjectType, 1, Object, 0LL),
              v5 = (struct _KEVENT *)Object[0],
              v31 < 0) )
        {
          v14 = -2147483640;
          v35 = WdLogNewEntry5_WdError(v33, v32, v34);
          *(_QWORD *)(v35 + 24) = Handle;
          WdLogEvent5_WdError(v35);
        }
        else
        {
          v14 = DxgkMiracastStopMiracastSession(v4, v5);
        }
      }
      else
      {
        v14 = -2147483638;
        v29 = WdLogNewEntry5_WdLowResource(v26, v25, v27, v28);
        *(_QWORD *)(v29 + 24) = -2147483638LL;
        WdLogEvent5_WdLowResource(v29);
      }
    }
    else
    {
      v14 = -2147483640;
      v21 = WdLogNewEntry5_WdWarning(v18, v17, v19);
      *(_QWORD *)(v21 + 24) = v20;
      WdLogEvent5_WdWarning(v21);
    }
  }
  else
  {
    v14 = -2147483643;
    v15 = WdLogNewEntry5_WdWarning(v12, v11, v13);
    *(_QWORD *)(v15 + 24) = -2147483643LL;
    WdLogEvent5_WdWarning(v15);
  }
  if ( v4 )
    operator delete[](v4);
  return v14;
}
