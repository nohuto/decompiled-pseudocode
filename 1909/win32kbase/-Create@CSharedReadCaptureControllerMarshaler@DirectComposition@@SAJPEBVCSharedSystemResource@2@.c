/*
 * XREFs of ?Create@CSharedReadCaptureControllerMarshaler@DirectComposition@@SAJPEBVCSharedSystemResource@2@PEAPEAV12@@Z @ 0x1C01C49AC
 * Callers:
 *     CreateSharedReadCaptureControllerMarshaler @ 0x1C01C4B50 (CreateSharedReadCaptureControllerMarshaler.c)
 * Callees:
 *     Win32AllocPoolWithQuotaZInit @ 0x1C0014C30 (Win32AllocPoolWithQuotaZInit.c)
 *     _guard_dispatch_icall_nop @ 0x1C00BF5D0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C00BF640 (memset.c)
 */

__int64 __fastcall DirectComposition::CSharedReadCaptureControllerMarshaler::Create(
        const struct DirectComposition::CSharedSystemResource *a1,
        struct DirectComposition::CSharedReadCaptureControllerMarshaler **a2)
{
  struct DirectComposition::CSharedReadCaptureControllerMarshaler *v4; // rax
  struct DirectComposition::CSharedReadCaptureControllerMarshaler *v5; // rbx
  NTSTATUS v6; // edi
  __int64 result; // rax

  v4 = (struct DirectComposition::CSharedReadCaptureControllerMarshaler *)Win32AllocPoolWithQuotaZInit(
                                                                            0x50uLL,
                                                                            0x75634344u);
  v5 = v4;
  if ( v4 )
  {
    memset(v4, 0, 0x50uLL);
    *((_DWORD *)v5 + 5) = 1;
    *(_QWORD *)v5 = &DirectComposition::CSharedReadCaptureControllerMarshaler::`vftable';
    *((_WORD *)v5 + 28) = 257;
  }
  else
  {
    v5 = 0LL;
  }
  if ( v5 )
  {
    v6 = ObReferenceObjectByPointer((char *)a1 - 24, 3u, ExCompositionObjectType, 0);
    if ( v6 < 0 )
    {
      (*(void (__fastcall **)(struct DirectComposition::CSharedReadCaptureControllerMarshaler *, __int64))(*(_QWORD *)v5 + 104LL))(
        v5,
        1LL);
      v5 = 0LL;
    }
    else
    {
      *((_QWORD *)v5 + 9) = a1;
    }
  }
  else
  {
    v6 = -1073741801;
  }
  result = (unsigned int)v6;
  *a2 = v5;
  return result;
}
