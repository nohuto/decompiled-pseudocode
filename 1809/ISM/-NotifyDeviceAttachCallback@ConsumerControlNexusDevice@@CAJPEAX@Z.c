/*
 * XREFs of ?NotifyDeviceAttachCallback@ConsumerControlNexusDevice@@CAJPEAX@Z @ 0x1800783D0
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180003590 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18012C150 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18012DB90 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall ConsumerControlNexusDevice::NotifyDeviceAttachCallback(__int64 *a1)
{
  unsigned int v2; // edi
  __int64 v3; // rcx
  __int64 v4; // r9
  __int64 v5; // rdx
  int v6; // eax
  __int64 v7; // rcx
  __int64 v8; // rcx
  __int64 v9; // rcx
  __int64 v10; // rcx
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  if ( a1 )
  {
    v3 = *a1;
    if ( v3 )
    {
      if ( a1[1] )
      {
        if ( a1[2] )
        {
          v6 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v3 + 40LL))(v3);
          v2 = v6;
          if ( v6 >= 0 )
          {
            v9 = a1[1];
            if ( v9 )
            {
              a1[1] = 0LL;
              (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 16LL))(v9);
            }
            v10 = *a1;
            if ( *a1 )
            {
              *a1 = 0LL;
              (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 16LL))(v10);
            }
            v2 = 0;
            goto LABEL_20;
          }
          v4 = (unsigned int)v6;
          v5 = 428LL;
        }
        else
        {
          v2 = -2147024809;
          v4 = 2147942487LL;
          v5 = 424LL;
        }
      }
      else
      {
        v2 = -2147024809;
        v4 = 2147942487LL;
        v5 = 423LL;
      }
    }
    else
    {
      v2 = -2147024809;
      v4 = 2147942487LL;
      v5 = 422LL;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v5,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\lamparray\\lib\\consumercontrolnexusdevice.cpp",
      (const char *)v4);
    v7 = a1[1];
    if ( v7 )
    {
      a1[1] = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 16LL))(v7);
    }
    v8 = *a1;
    if ( *a1 )
    {
      *a1 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 16LL))(v8);
    }
LABEL_20:
    operator delete(a1, (const struct std::nothrow_t *)0x18);
    return v2;
  }
  v2 = -2147024809;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x1A5,
    (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\lamparray\\lib\\consumercontrolnexusdevice.cpp",
    (const char *)0x80070057LL);
  return v2;
}
