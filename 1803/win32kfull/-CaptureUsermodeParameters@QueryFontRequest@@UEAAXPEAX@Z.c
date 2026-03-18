/*
 * XREFs of ?CaptureUsermodeParameters@QueryFontRequest@@UEAAXPEAX@Z @ 0x1C00F1200
 * Callers:
 *     <none>
 * Callees:
 *     ?ObtainKernelmodeAllocation@UmfdAllocation@@SAPEAXW4FontDriverType@@_KPEAXIPEA_NP6A_N22I@Z@Z @ 0x1C007DB40 (-ObtainKernelmodeAllocation@UmfdAllocation@@SAPEAXW4FontDriverType@@_KPEAXIPEA_NP6A_N22I@Z@Z.c)
 *     ?ValidateIFIMETRICS@@YA_NPEAU_IFIMETRICS@@@Z @ 0x1C007E274 (-ValidateIFIMETRICS@@YA_NPEAU_IFIMETRICS@@@Z.c)
 *     ?Win32ProbeForRead@@YAXPEAX_KK@Z @ 0x1C007E554 (-Win32ProbeForRead@@YAXPEAX_KK@Z.c)
 *     ?ReleaseKernelmodeAllocation@UmfdAllocation@@SAXPEAX@Z @ 0x1C00CAB6C (-ReleaseKernelmodeAllocation@UmfdAllocation@@SAXPEAX@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C013D370 (_guard_dispatch_icall_nop.c)
 */

void __fastcall QueryFontRequest::CaptureUsermodeParameters(QueryFontRequest *this, _QWORD *a2)
{
  _QWORD *v3; // r8
  char *v4; // rcx
  unsigned int *v5; // r15
  unsigned int v6; // esi
  ULONG v7; // r14d
  __int64 *v8; // rbx
  unsigned int v9; // eax
  struct _IFIMETRICS *v10; // rax
  char *v11; // rbx

  v3 = (_QWORD *)a2[3];
  *((_QWORD *)this + 11) = a2[4];
  if ( v3 == *((_QWORD **)this + 10) )
  {
    **((_QWORD **)this + 8) = *v3;
    v4 = (char *)*((_QWORD *)this + 11);
    if ( v4 )
    {
      Win32ProbeForRead(v4, 192LL, 8);
      v5 = (unsigned int *)*((_QWORD *)this + 11);
      v6 = *v5;
      v7 = v5[1];
      if ( *v5 >= 0xB6 && (!v7 || v6 >= 0xC0 && v7 < v6 && v6 - v7 >= 0xC0) )
      {
        v8 = (__int64 *)*((_QWORD *)this + 8);
        v9 = (**(__int64 (__fastcall ***)(QueryFontRequest *))this)(this);
        v10 = (struct _IFIMETRICS *)UmfdAllocation::ObtainKernelmodeAllocation(
                                      v9,
                                      *v8,
                                      v5,
                                      v6,
                                      0LL,
                                      (__int64)UmfdAllocation::TryBufferHasSameContent);
        v11 = (char *)v10;
        if ( v10 )
        {
          v10->cjThis = v6;
          v10->cjIfiExtra = v7;
          if ( ValidateIFIMETRICS(v10) )
            *((_QWORD *)this + 9) = v11;
          else
            UmfdAllocation::ReleaseKernelmodeAllocation(v11);
        }
      }
    }
  }
}
