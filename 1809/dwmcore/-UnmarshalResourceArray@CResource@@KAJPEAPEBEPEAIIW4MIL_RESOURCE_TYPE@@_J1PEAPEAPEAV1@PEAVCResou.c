/*
 * XREFs of ?UnmarshalResourceArray@CResource@@KAJPEAPEBEPEAIIW4MIL_RESOURCE_TYPE@@_J1PEAPEAPEAV1@PEAVCResourceTable@@_N@Z @ 0x18006BC2C
 * Callers:
 *     ?ProcessUpdate@CTransformGroup@@QEAAJPEAVCResourceTable@@PEBUMILCMD_TRANSFORMGROUP@@PEBXI@Z @ 0x18001CC68 (-ProcessUpdate@CTransformGroup@@QEAAJPEAVCResourceTable@@PEBUMILCMD_TRANSFORMGROUP@@PEBXI@Z.c)
 *     ?ProcessUpdate@CDcompRenderTargetGroup@@QEAAJPEAVCResourceTable@@PEBUMILCMD_DCOMPRENDERTARGETGROUP@@PEBXI@Z @ 0x18007829C (-ProcessUpdate@CDcompRenderTargetGroup@@QEAAJPEAVCResourceTable@@PEBUMILCMD_DCOMPRENDERTARGETGRO.c)
 *     ?ProcessUpdate@CAtlasedRectsGroup@@QEAAJPEAVCResourceTable@@PEBUMILCMD_ATLASEDRECTSGROUP@@PEBXI@Z @ 0x1800A0148 (-ProcessUpdate@CAtlasedRectsGroup@@QEAAJPEAVCResourceTable@@PEBUMILCMD_ATLASEDRECTSGROUP@@PEBXI@.c)
 *     ?ProcessUpdate@CVisualGroup@@QEAAJPEAVCResourceTable@@PEBUMILCMD_VISUALGROUP@@PEBXI@Z @ 0x1801B9010 (-ProcessUpdate@CVisualGroup@@QEAAJPEAVCResourceTable@@PEBUMILCMD_VISUALGROUP@@PEBXI@Z.c)
 *     ?ProcessAppend@CGeometryGroup@@QEAAJPEAVCResourceTable@@PEBUMILCMD_GEOMETRYGROUP@@PEBXI@Z @ 0x1801BA620 (-ProcessAppend@CGeometryGroup@@QEAAJPEAVCResourceTable@@PEBUMILCMD_GEOMETRYGROUP@@PEBXI@Z.c)
 *     ?ProcessAppend@CTransform3DGroup@@QEAAJPEAVCResourceTable@@PEBUMILCMD_TRANSFORM3DGROUP@@PEBXI@Z @ 0x1801BA818 (-ProcessAppend@CTransform3DGroup@@QEAAJPEAVCResourceTable@@PEBUMILCMD_TRANSFORM3DGROUP@@PEBXI@Z.c)
 *     ?ProcessUpdate@CGeometry2DGroup@@QEAAJPEAVCResourceTable@@PEBUMILCMD_GEOMETRY2DGROUP@@PEBXI@Z @ 0x1801BAF20 (-ProcessUpdate@CGeometry2DGroup@@QEAAJPEAVCResourceTable@@PEBUMILCMD_GEOMETRY2DGROUP@@PEBXI@Z.c)
 *     ?ProcessUpdate@CGeometryGroup@@QEAAJPEAVCResourceTable@@PEBUMILCMD_GEOMETRYGROUP@@PEBXI@Z @ 0x1801BB00C (-ProcessUpdate@CGeometryGroup@@QEAAJPEAVCResourceTable@@PEBUMILCMD_GEOMETRYGROUP@@PEBXI@Z.c)
 *     ?ProcessUpdate@CTransform3DGroup@@QEAAJPEAVCResourceTable@@PEBUMILCMD_TRANSFORM3DGROUP@@PEBXI@Z @ 0x1801BBADC (-ProcessUpdate@CTransform3DGroup@@QEAAJPEAVCResourceTable@@PEBUMILCMD_TRANSFORM3DGROUP@@PEBXI@Z.c)
 * Callees:
 *     ?Free@ProcessHeapImpl@WPF@@SAXPEAX@Z @ 0x1800BAE7C (-Free@ProcessHeapImpl@WPF@@SAXPEAX@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x1800C7F7C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?GetResource@CResourceTable@@QEBAPEAVCResource@@IW4MIL_RESOURCE_TYPE@@@Z @ 0x1800D0ED0 (-GetResource@CResourceTable@@QEBAPEAVCResource@@IW4MIL_RESOURCE_TYPE@@@Z.c)
 */

__int64 __fastcall CResource::UnmarshalResourceArray(
        unsigned __int64 *a1,
        int *a2,
        unsigned int a3,
        unsigned int a4,
        __int64 a5,
        unsigned int *a6,
        void **a7,
        __int64 a8,
        char a9)
{
  signed int v9; // ebx
  unsigned int v11; // edi
  unsigned __int64 v12; // rbp
  unsigned int v13; // ecx
  SIZE_T v14; // r8
  __int64 *v15; // rax
  __int64 *v16; // r14
  unsigned int *v17; // rsi
  unsigned int v18; // ebx
  unsigned __int64 v19; // rcx
  __int64 v20; // rdx
  __int64 Resource; // rax
  unsigned __int64 v22; // rcx
  unsigned __int64 v23; // rax
  unsigned __int64 v24; // rcx
  bool v25; // cf
  int v26; // eax
  unsigned int v28; // [rsp+20h] [rbp-48h]
  unsigned int v30; // [rsp+88h] [rbp+20h]

  v30 = a4;
  v9 = 0;
  *a6 = 0;
  *a7 = 0LL;
  if ( a3 > *a2 || (a3 & 3) != 0 )
  {
    v9 = -2003303421;
    MilInstrumentationCheckHR_MaybeFailFast((unsigned int)a1, 0LL, 0, -2003303421, 0x42u);
  }
  else
  {
    v11 = a3 >> 2;
    *a6 = a3 >> 2;
    if ( !(a3 >> 2) )
      return (unsigned int)v9;
    v12 = -1LL;
    v13 = 1;
    if ( 0xFFFFFFFFFFFFFFFFuLL / v11 <= 8 )
    {
      v9 = -2147024809;
      v16 = 0LL;
    }
    else
    {
      v14 = 8LL * v11;
      if ( !v14 )
        v14 = 1LL;
      v15 = (__int64 *)HeapAlloc(WPF::g_processHeap, 0, v14);
      a4 = v30;
      v16 = v15;
      *a7 = v15;
      if ( !v15 )
        v9 = -2147024882;
    }
    if ( v9 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v13, 0LL, 0, v9, 0x4Eu);
    }
    else
    {
      v17 = (unsigned int *)*a1;
      v18 = 0;
      v19 = *a1;
      while ( 1 )
      {
        v20 = *v17;
        Resource = 0LL;
        ++v17;
        if ( (_DWORD)v20 )
        {
          Resource = CResourceTable::GetResource(a8, v20, a4);
          if ( !Resource )
          {
            v28 = 91;
            goto LABEL_32;
          }
        }
        else if ( !a9 )
        {
          v28 = 95;
LABEL_32:
          v9 = -2147024890;
          MilInstrumentationCheckHR_MaybeFailFast(v19, 0LL, 0, -2147024890, v28);
          goto LABEL_33;
        }
        *v16 = Resource;
        ++v18;
        ++v16;
        if ( v18 >= v11 )
          break;
        a4 = v30;
      }
      v22 = *a1;
      if ( (unsigned __int64)v17 < v22 )
        v23 = -1LL;
      else
        v23 = (unsigned __int64)v17 - v22;
      v9 = (unsigned __int64)v17 < v22 ? 0x80070216 : 0;
      if ( (unsigned __int64)v17 < v22 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(v22, 0LL, 0, v9, 0x71u);
      }
      else
      {
        v24 = (unsigned int)*a2;
        v25 = v24 < v23;
        if ( v24 >= v23 )
        {
          v12 = (unsigned int)v24 - v23;
          v25 = v24 < v23;
        }
        v9 = v25 ? 0x80070216 : 0;
        if ( v24 < v23 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(v24, 0LL, 0, v9, 0x72u);
        }
        else
        {
          v26 = -1;
          if ( v12 <= 0xFFFFFFFF )
            v26 = v12;
          *a2 = v26;
          v9 = v12 > 0xFFFFFFFF ? 0x80070216 : 0;
          if ( v12 > 0xFFFFFFFF )
            MilInstrumentationCheckHR_MaybeFailFast(0xFFFFFFFF, 0LL, 0, v9, 0x73u);
          else
            *a1 = (unsigned __int64)v17;
        }
      }
    }
  }
  if ( v9 < 0 )
  {
LABEL_33:
    if ( *a7 )
    {
      WPF::ProcessHeapImpl::Free(*a7);
      *a7 = 0LL;
    }
    *a6 = 0;
  }
  return (unsigned int)v9;
}
