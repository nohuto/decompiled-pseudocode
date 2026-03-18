/*
 * XREFs of ?CopyPixelsHelper@CFormatConverter@@AEAAJHHIIIIPEAEII0@Z @ 0x18021552C
 * Callers:
 *     ?CopyPixels@CFormatConverter@@UEAAJPEBUWICRect@@IIPEAE@Z @ 0x180215140 (-CopyPixels@CFormatConverter@@UEAAJPEBUWICRect@@IIPEAE@Z.c)
 * Callees:
 *     ?HrCheckBufferSize@@YAJW4DXGI_FORMAT@@IIII@Z @ 0x1800969C4 (-HrCheckBufferSize@@YAJW4DXGI_FORMAT@@IIII@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x1800C7F7C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?Run@CScanPipeline@@QEAAXPEAXPEBXIHH@Z @ 0x180215E5C (-Run@CScanPipeline@@QEAAXPEAXPEBXIHH@Z.c)
 */

__int64 __fastcall CFormatConverter::CopyPixelsHelper(
        CFormatConverter *this,
        int a2,
        int a3,
        unsigned int a4,
        unsigned int a5,
        unsigned int a6,
        unsigned int a7,
        unsigned __int8 *a8,
        unsigned int a9,
        unsigned int a10,
        unsigned __int8 *a11)
{
  int v13; // eax
  __int64 v14; // rcx
  unsigned int v15; // edi
  unsigned int v16; // ebx
  int v17; // eax
  __int64 v18; // rcx
  unsigned int v22; // [rsp+70h] [rbp+8h]

  v13 = HrCheckBufferSize((enum DXGI_FORMAT)*((_DWORD *)this + 18), a6, a4, a5, a7);
  v15 = 0;
  v16 = v13;
  if ( v13 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v14, 0LL, 0, v13, 0x91u);
  }
  else
  {
    v17 = HrCheckBufferSize((enum DXGI_FORMAT)*((_DWORD *)this + 21), a9, a4, a5, a10);
    v22 = v17;
    v16 = v17;
    if ( v17 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v18, 0LL, 0, v17, 0x97u);
    }
    else if ( a5 )
    {
      do
      {
        CScanPipeline::Run((CFormatConverter *)((char *)this + 112), a11, a8, a4, a2, v15 + a3);
        a11 += a9;
        a8 += a6;
        ++v15;
      }
      while ( v15 < a5 );
      return v22;
    }
  }
  return v16;
}
