/*
 * XREFs of ?ProcessAddPrimitives@CPrimitiveGroup@@QEAAJPEAVCResourceTable@@PEBUMILCMD_PRIMITIVEGROUP_ADDPRIMITIVES@@@Z @ 0x1800C1938
 * Callers:
 *     ?ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@PEAI@Z @ 0x1800D0FD0 (-ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@PEAI@Z.c)
 * Callees:
 *     ?ResolveSharedMemoryBuffer@CPrimitiveGroup@@AEAAXXZ @ 0x1800C16C0 (-ResolveSharedMemoryBuffer@CPrimitiveGroup@@AEAAXXZ.c)
 *     ?ReleasePrimitiveCaches@CPrimitiveGroup@@AEAAX_N@Z @ 0x1800C1A34 (-ReleasePrimitiveCaches@CPrimitiveGroup@@AEAAX_N@Z.c)
 *     ??$ReplaceInterface@VCSharedSection@@V1@@@YAXAEAPEAVCSharedSection@@PEAV0@@Z @ 0x1800C1AD0 (--$ReplaceInterface@VCSharedSection@@V1@@@YAXAEAPEAVCSharedSection@@PEAV0@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x1800C7F7C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?GetResource@CResourceTable@@QEBAPEAVCResource@@IW4MIL_RESOURCE_TYPE@@@Z @ 0x1800D0ED0 (-GetResource@CResourceTable@@QEBAPEAVCResource@@IW4MIL_RESOURCE_TYPE@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800F00A0 (_guard_dispatch_icall_nop.c)
 *     McTemplateU0qxqq @ 0x1801AC594 (McTemplateU0qxqq.c)
 */

__int64 __fastcall CPrimitiveGroup::ProcessAddPrimitives(
        CPrimitiveGroup *this,
        struct CResourceTable *a2,
        const struct MILCMD_PRIMITIVEGROUP_ADDPRIMITIVES *a3)
{
  unsigned int v6; // esi
  int v7; // edx
  unsigned int v8; // ecx
  __int64 Resource; // r14
  char v10; // bl
  unsigned int v12; // [rsp+20h] [rbp-18h]

  v6 = 0;
  Resource = CResourceTable::GetResource(a2, *((unsigned int *)a3 + 2), 136LL);
  if ( !Resource )
  {
    v12 = 193;
LABEL_10:
    v6 = -2003303421;
    MilInstrumentationCheckHR_MaybeFailFast(v8, 0LL, 0, -2003303421, v12);
    return v6;
  }
  if ( *((_DWORD *)a3 + 3) < 0x3Cu )
  {
    v12 = 198;
    goto LABEL_10;
  }
  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x800) != 0 )
    McTemplateU0qxqq(v8, v7, *((_DWORD *)a2 + 12), (_DWORD)this, *((_DWORD *)a3 + 1), *((_DWORD *)a3 + 2));
  v10 = (*(__int64 (__fastcall **)(CPrimitiveGroup *))(*(_QWORD *)this + 192LL))(this);
  ReplaceInterface<CSharedSection,CSharedSection>((char *)this + 424, Resource);
  *((_DWORD *)this + 108) = *((_DWORD *)a3 + 3);
  *((_DWORD *)this + 109) = *((_DWORD *)a3 + 4);
  *((_QWORD *)this + 63) = 0LL;
  *((_QWORD *)this + 64) = 0LL;
  *((_QWORD *)this + 65) = 0LL;
  *((_QWORD *)this + 66) = 0LL;
  CPrimitiveGroup::ReleasePrimitiveCaches(this, 1);
  CPrimitiveGroup::ResolveSharedMemoryBuffer(this);
  if ( v10 != (*(unsigned __int8 (__fastcall **)(CPrimitiveGroup *))(*(_QWORD *)this + 192LL))(this) )
    (*(void (__fastcall **)(CPrimitiveGroup *, __int64))(*(_QWORD *)this + 64LL))(this, 3LL);
  return v6;
}
