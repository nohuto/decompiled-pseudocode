/*
 * XREFs of ?ContainsApp@CDropFeedback@@UEAA_NPEAUIImmersiveApplication@@@Z @ 0x1803D4FA0
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x1800609CC (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800B0F80 (_guard_dispatch_icall_nop.c)
 */

char __fastcall CDropFeedback::ContainsApp(CDropFeedback *this, struct IImmersiveApplication *a2)
{
  __int64 v3; // rcx
  unsigned int v5; // esi
  char v6; // di
  __int64 v7; // rbx
  __int64 v8; // rbx
  __int64 v10[2]; // [rsp+30h] [rbp-10h] BYREF
  int v11; // [rsp+70h] [rbp+30h] BYREF
  unsigned int v12; // [rsp+80h] [rbp+40h] BYREF
  __int64 v13; // [rsp+88h] [rbp+48h] BYREF

  v11 = 0;
  v3 = *((_QWORD *)this + 13);
  if ( !v3 )
    return 0;
  (*(void (__fastcall **)(__int64, unsigned int *))(*(_QWORD *)v3 + 24LL))(v3, &v12);
  v5 = 0;
  v6 = 1;
  if ( !v12 )
  {
LABEL_9:
    if ( v11 )
      return v6;
    return 0;
  }
  while ( !v11 )
  {
    v10[0] = 0LL;
    v7 = *((_QWORD *)this + 13);
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(v10);
    if ( (*(int (__fastcall **)(__int64, _QWORD, GUID *, __int64 *))(*(_QWORD *)v7 + 32LL))(
           v7,
           v5,
           &GUID_114ed843_c914_443d_9588_6ffb643e73d0,
           v10) >= 0 )
    {
      v13 = 0LL;
      v8 = v10[0];
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v13);
      if ( (*(int (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v8 + 40LL))(v8, &v13) >= 0 )
        (*(void (__fastcall **)(struct IImmersiveApplication *, __int64, int *))(*(_QWORD *)a2 + 104LL))(a2, v13, &v11);
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v13);
    }
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(v10);
    if ( ++v5 >= v12 )
      goto LABEL_9;
  }
  return v6;
}
