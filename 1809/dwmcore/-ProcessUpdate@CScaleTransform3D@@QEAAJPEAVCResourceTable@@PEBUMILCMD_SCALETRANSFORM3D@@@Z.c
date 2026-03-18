/*
 * XREFs of ?ProcessUpdate@CScaleTransform3D@@QEAAJPEAVCResourceTable@@PEBUMILCMD_SCALETRANSFORM3D@@@Z @ 0x1801BB948
 * Callers:
 *     ?ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@PEAI@Z @ 0x1800D0FD0 (-ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@PEAI@Z.c)
 * Callees:
 *     ?NotifyOnChanged@CResource@@UEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x1800A0DF0 (-NotifyOnChanged@CResource@@UEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z.c)
 */

__int64 __fastcall CScaleTransform3D::ProcessUpdate(
        CScaleTransform3D *this,
        struct CResourceTable *a2,
        const struct MILCMD_SCALETRANSFORM3D *a3)
{
  __int64 v3; // xmm0_8
  __m128d v4; // xmm2
  __m128d v5; // xmm3
  __int64 v6; // xmm1_8

  v3 = *((_QWORD *)a3 + 6);
  v4 = (__m128d)*((_OWORD *)a3 + 1);
  v5 = (__m128d)*((_OWORD *)a3 + 2);
  v6 = *((_QWORD *)a3 + 1);
  *((_QWORD *)this + 20) = *(_QWORD *)&v4.m128d_f64[0];
  *((_QWORD *)this + 22) = *(_QWORD *)&v5.m128d_f64[0];
  *((_QWORD *)this + 21) = *(_OWORD *)&_mm_unpackhi_pd(v4, v4);
  *((_QWORD *)this + 23) = *(_OWORD *)&_mm_unpackhi_pd(v5, v5);
  *((_QWORD *)this + 19) = v6;
  *((_QWORD *)this + 24) = v3;
  CResource::NotifyOnChanged((__int64)this, 0, 0LL);
  return 0LL;
}
