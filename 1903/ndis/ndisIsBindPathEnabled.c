/*
 * XREFs of ndisIsBindPathEnabled @ 0x1C01262B4
 * Callers:
 *     ndisIsLwfBindingEnabled @ 0x1C0126408 (ndisIsLwfBindingEnabled.c)
 *     ndisIsLwfBindingEnabled_0 @ 0x1C01264AC (ndisIsLwfBindingEnabled_0.c)
 *     ndisIsProtocolBindingEnabled @ 0x1C012653C (ndisIsProtocolBindingEnabled.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0040770 (__security_check_cookie.c)
 *     ?ReadBoolean@NetSetupPropertyBag@@QEAAJAEBU_NETSETUPPROPKEY@@AEA_N@Z @ 0x1C0100980 (-ReadBoolean@NetSetupPropertyBag@@QEAAJAEBU_NETSETUPPROPKEY@@AEA_N@Z.c)
 *     ?Open@KRegKey@@QEAAJKPEB_WPEAX@Z @ 0x1C0100B80 (-Open@KRegKey@@QEAAJKPEB_WPEAX@Z.c)
 */

__int64 __fastcall ndisIsBindPathEnabled(wchar_t *a1, char a2, bool *a3)
{
  unsigned int v5; // eax
  unsigned int v6; // ebx
  const struct _NETSETUPPROPKEY *v7; // rdi
  HANDLE Handle; // [rsp+20h] [rbp-60h] BYREF
  void **p_Handle; // [rsp+28h] [rbp-58h] BYREF
  __int128 v11; // [rsp+30h] [rbp-50h] BYREF
  int v12; // [rsp+40h] [rbp-40h]
  __int128 v13; // [rsp+44h] [rbp-3Ch]
  int v14; // [rsp+54h] [rbp-2Ch]
  __int128 v15; // [rsp+58h] [rbp-28h]
  int v16; // [rsp+68h] [rbp-18h]
  char v17; // [rsp+6Ch] [rbp-14h] BYREF

  Handle = 0LL;
  v5 = KRegKey::Open((KRegKey *)&Handle, 8u, a1, 0LL);
  v6 = v5;
  if ( v5 )
  {
    if ( v5 == -1073741772 )
    {
LABEL_7:
      *a3 = a2 ^ 1;
      v6 = 0;
    }
  }
  else
  {
    v7 = (const struct _NETSETUPPROPKEY *)&v11;
    v12 = 80;
    v11 = xmmword_1C00D64B8;
    v14 = 82;
    v16 = 84;
    v13 = xmmword_1C00D6470;
    p_Handle = &Handle;
    v15 = xmmword_1C00D6560;
    while ( 1 )
    {
      v6 = NetSetupPropertyBag::ReadBoolean(&p_Handle, v7, a3);
      if ( v6 != -1073741772 )
        break;
      v7 = (const struct _NETSETUPPROPKEY *)((char *)v7 + 20);
      if ( v7 == (const struct _NETSETUPPROPKEY *)&v17 )
        goto LABEL_7;
    }
  }
  if ( Handle )
    ZwClose(Handle);
  return v6;
}
