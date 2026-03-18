/*
 * XREFs of ??0CommonRenderingShadersData@CD3DDeviceLevel1@@QEAA@AEBU01@@Z @ 0x1800D8F90
 * Callers:
 *     ?Add@?$CMap@ULookupKey@ShaderLinkingConfig@@UCommonRenderingShadersData@CD3DDeviceLevel1@@V?$CMapEqualHelper@ULookupKey@ShaderLinkingConfig@@UCommonRenderingShadersData@CD3DDeviceLevel1@@@@@@QEAAHAEBULookupKey@ShaderLinkingConfig@@AEBUCommonRenderingShadersData@CD3DDeviceLevel1@@@Z @ 0x1800D8D40 (-Add@-$CMap@ULookupKey@ShaderLinkingConfig@@UCommonRenderingShadersData@CD3DDeviceLevel1@@V-$CMa.c)
 * Callees:
 *     ?InternalAddRef@?$ComPtr@UIMessageCallSendHost@@@WRL@Microsoft@@IEBAXXZ @ 0x18001B8B8 (-InternalAddRef@-$ComPtr@UIMessageCallSendHost@@@WRL@Microsoft@@IEBAXXZ.c)
 */

CD3DDeviceLevel1::CommonRenderingShadersData *__fastcall CD3DDeviceLevel1::CommonRenderingShadersData::CommonRenderingShadersData(
        CD3DDeviceLevel1::CommonRenderingShadersData *this,
        const struct CD3DDeviceLevel1::CommonRenderingShadersData *a2)
{
  *(_QWORD *)this = *(_QWORD *)a2;
  Microsoft::WRL::ComPtr<IMessageCallSendHost>::InternalAddRef((__int64 *)this);
  *((_DWORD *)this + 2) = *((_DWORD *)a2 + 2);
  return this;
}
