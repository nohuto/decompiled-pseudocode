/*
 * XREFs of DpiDispatchCleanupAndClose @ 0x1C013B380
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0024FA0 (_guard_dispatch_icall_nop.c)
 *     McTemplateK0xq @ 0x1C003566C (McTemplateK0xq.c)
 */

__int64 __fastcall DpiDispatchCleanupAndClose(__int64 a1, __int64 a2, const GUID *a3)
{
  unsigned int v3; // esi
  __int64 v6; // rbp
  char v7; // r14
  __int64 (__fastcall *v8)(__int64, __int64); // rax
  __int64 v9; // rcx
  const GUID *v10; // r8
  __int64 v12; // [rsp+20h] [rbp-18h]

  v3 = 0;
  if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
    McTemplateK0xq(a1, &EventEnterDpiDispatchClose, a3, a1, 0);
  v6 = *(_QWORD *)(a1 + 64);
  v7 = **(_BYTE **)(a2 + 184);
  v8 = *(__int64 (__fastcall **)(__int64, __int64))(v6 + 96);
  if ( v8 )
  {
    v3 = v8(a1, a2);
  }
  else
  {
    *(_DWORD *)(a2 + 48) = 0;
    IofCompleteRequest((PIRP)a2, 0);
  }
  if ( v7 == 2 )
    IoReleaseRemoveLockEx((PIO_REMOVE_LOCK)(v6 + 64), 0LL, 0x20u);
  if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
  {
    LODWORD(v12) = v3;
    McTemplateK0xq(v9, &EventExitDpiDispatchClose, v10, a1, v12);
  }
  return v3;
}
