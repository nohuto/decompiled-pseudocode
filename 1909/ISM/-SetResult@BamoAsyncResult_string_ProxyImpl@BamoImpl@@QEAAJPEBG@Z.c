/*
 * XREFs of ?SetResult@BamoAsyncResult_string_ProxyImpl@BamoImpl@@QEAAJPEBG@Z @ 0x180114A70
 * Callers:
 *     ?SetResult@BamoAsyncResult_string_Proxy@@UEAAJPEBG@Z @ 0x180114A20 (-SetResult@BamoAsyncResult_string_Proxy@@UEAAJPEBG@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180010F44 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?PrepareForRemoteCall@BamoProxyImpl@BamoImpl@Microsoft@@QEAAJPEAPEAUIMessageCallSendHost@@PEAI1@Z @ 0x1800239F0 (-PrepareForRemoteCall@BamoProxyImpl@BamoImpl@Microsoft@@QEAAJPEAPEAUIMessageCallSendHost@@PEAI1@.c)
 */

__int64 __fastcall BamoImpl::BamoAsyncResult_string_ProxyImpl::SetResult(
        BamoImpl::BamoAsyncResult_string_ProxyImpl *this,
        const unsigned __int16 *a2)
{
  int v2; // ebx
  __int64 v3; // rdx
  _QWORD v5[5]; // [rsp+40h] [rbp-28h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+0h]
  unsigned int v7; // [rsp+70h] [rbp+8h] BYREF
  unsigned int v8; // [rsp+80h] [rbp+18h] BYREF
  struct IMessageCallSendHost *v9; // [rsp+88h] [rbp+20h] BYREF

  if ( !*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 24LL) + 24LL) + 40LL) )
  {
    v2 = -2018375660;
    v3 = 2683LL;
LABEL_3:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v3,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputhost\\components\\mpcmanager\\bamo\\objfre\\amd64\\MPCMana"
               "gerBamo.Common.bamo.h",
      (const char *)(unsigned int)v2);
    return (unsigned int)v2;
  }
  v2 = Microsoft::BamoImpl::BamoProxyImpl::PrepareForRemoteCall(this, &v9, &v7, &v8);
  if ( v2 < 0 )
  {
    v3 = 2690LL;
    goto LABEL_3;
  }
  v5[0] = v7;
  v5[1] = v8;
  return CoreUICallSend(v9, v5, 2LL, 0LL);
}
