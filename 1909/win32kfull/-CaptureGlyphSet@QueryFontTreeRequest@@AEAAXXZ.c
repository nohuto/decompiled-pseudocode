/*
 * XREFs of ?CaptureGlyphSet@QueryFontTreeRequest@@AEAAXXZ @ 0x1C011E4E0
 * Callers:
 *     ?CaptureUsermodeParameters@QueryFontTreeRequest@@UEAAXPEAX@Z @ 0x1C011E480 (-CaptureUsermodeParameters@QueryFontTreeRequest@@UEAAXPEAX@Z.c)
 * Callees:
 *     ?ReleaseKernelmodeAllocation@UmfdAllocation@@SAXPEAX@Z @ 0x1C0095B34 (-ReleaseKernelmodeAllocation@UmfdAllocation@@SAXPEAX@Z.c)
 *     ?ObtainKernelmodeAllocation@UmfdAllocation@@SAPEAXW4FontDriverType@@_KPEAXIPEA_NP6A_N22I@Z@Z @ 0x1C011E654 (-ObtainKernelmodeAllocation@UmfdAllocation@@SAPEAXW4FontDriverType@@_KPEAXIPEA_NP6A_N22I@Z@Z.c)
 *     ?TryProbeAndReadUserModeGlyphSet@QueryFontTreeRequest@@AEAA_NPEAK0@Z @ 0x1C011EE3C (-TryProbeAndReadUserModeGlyphSet@QueryFontTreeRequest@@AEAA_NPEAK0@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C01680F0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall QueryFontTreeRequest::CaptureGlyphSet(QueryFontTreeRequest *this)
{
  __int64 v1; // rdi
  __int64 v2; // r14
  __int64 v3; // r15
  unsigned int v5; // esi
  unsigned __int64 v6; // rbp
  __int64 v7; // rdi
  __int64 (__fastcall **v8)(QueryFontTreeRequest *); // rax
  _QWORD *v9; // rbx
  unsigned int v10; // eax
  __int64 v11; // rax
  unsigned int v12; // ebx
  unsigned __int64 v13; // rdi
  unsigned int v14; // r10d
  __int64 v15; // r8
  unsigned __int64 v16; // rcx
  unsigned __int16 v17; // r9
  unsigned __int64 v18; // r11
  __int64 v19; // [rsp+38h] [rbp-20h]
  unsigned int v20; // [rsp+60h] [rbp+8h] BYREF
  unsigned int v21; // [rsp+68h] [rbp+10h] BYREF

  v3 = *((_QWORD *)this + 11);
  if ( v3 )
  {
    if ( QueryFontTreeRequest::TryProbeAndReadUserModeGlyphSet(this, &v21, &v20) )
    {
      v5 = v20;
      v6 = v3 + 16 * (v20 + 1LL);
      if ( v6 >= v3 + 16 )
      {
        v19 = v1;
        v7 = v21;
        if ( v21 >= 16 * ((unsigned __int64)v20 + 1) )
        {
          v8 = *(__int64 (__fastcall ***)(QueryFontTreeRequest *))this;
          v9 = (_QWORD *)*((_QWORD *)this + 8);
          LOBYTE(v20) = 0;
          v10 = (*v8)(this);
          v11 = UmfdAllocation::ObtainKernelmodeAllocation(
                  v10,
                  *v9,
                  v3,
                  (unsigned int)v7,
                  &v20,
                  QueryFontTreeRequest::TryGlyphSetHasSameContent,
                  v2,
                  v19);
          if ( v11 )
          {
            if ( !(_BYTE)v20 )
              goto LABEL_19;
            *(_DWORD *)v11 = v7;
            v12 = 0;
            v13 = v3 + v7;
            *(_DWORD *)(v11 + 12) = v5;
            v14 = 0;
            if ( v5 )
            {
              v15 = v11 + 18;
              do
              {
                v16 = *(_QWORD *)(v15 + 6);
                v17 = *(_WORD *)v15;
                if ( v16 )
                {
                  if ( !v17 )
                    goto LABEL_21;
                  if ( v16 < v6 )
                    goto LABEL_21;
                  if ( v16 >= v13 )
                    goto LABEL_21;
                  v18 = v16 + 4LL * v17;
                  if ( v18 < v16 )
                    goto LABEL_21;
                  if ( v18 > v13 )
                    goto LABEL_21;
                  *(_QWORD *)(v15 + 6) = v11 + v16 - v3;
                  if ( v12 + v17 < v12 )
                    goto LABEL_21;
                  v12 += v17;
                }
                else if ( v17 )
                {
                  goto LABEL_21;
                }
                ++v14;
                v15 += 16LL;
              }
              while ( v14 < v5 );
            }
            if ( v12 != *(_DWORD *)(v11 + 8) )
LABEL_21:
              UmfdAllocation::ReleaseKernelmodeAllocation((char *)v11);
            else
LABEL_19:
              *((_QWORD *)this + 9) = v11;
          }
        }
      }
    }
  }
}
