/*
 * XREFs of ??_GCGITCallbackArray@@UEAAPEAXI@Z @ 0x180066C40
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$RuntimeClass@U?$RuntimeClassFlags@$01@WRL@Microsoft@@VFtmBase@23@UIObjectArray@@@WRL@Microsoft@@UEAA@XZ @ 0x180066C84 (--1-$RuntimeClass@U-$RuntimeClassFlags@$01@WRL@Microsoft@@VFtmBase@23@UIObjectArray@@@WRL@Micros.c)
 *     ??1?$CCoSimpleArray@V?$ComPtr@UIGITCookieObject@@@WRL@Microsoft@@$0PPPPPPPO@V?$CSimpleArrayStandardCompareHelper@V?$ComPtr@UIGITCookieObject@@@WRL@Microsoft@@@@@@QEAA@XZ @ 0x180066CC4 (--1-$CCoSimpleArray@V-$ComPtr@UIGITCookieObject@@@WRL@Microsoft@@$0PPPPPPPO@V-$CSimpleArrayStand.c)
 *     ??3@YAXPEAX@Z @ 0x180087AB0 (--3@YAXPEAX@Z.c)
 */

CGITCallbackArray *__fastcall CGITCallbackArray::`scalar deleting destructor'(CGITCallbackArray *this, char a2)
{
  CCoSimpleArray<Microsoft::WRL::ComPtr<IGITCookieObject>,4294967294,CSimpleArrayStandardCompareHelper<Microsoft::WRL::ComPtr<IGITCookieObject>>>::~CCoSimpleArray<Microsoft::WRL::ComPtr<IGITCookieObject>,4294967294,CSimpleArrayStandardCompareHelper<Microsoft::WRL::ComPtr<IGITCookieObject>>>((char *)this + 48);
  Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Microsoft::WRL::FtmBase,IObjectArray>::~RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Microsoft::WRL::FtmBase,IObjectArray>(this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
