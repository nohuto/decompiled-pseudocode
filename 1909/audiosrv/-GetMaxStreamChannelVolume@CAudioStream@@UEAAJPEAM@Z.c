/*
 * XREFs of ?GetMaxStreamChannelVolume@CAudioStream@@UEAAJPEAM@Z @ 0x1800462B0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CAudioStream::GetMaxStreamChannelVolume(CAudioStream *this, float *a2)
{
  __int64 v2; // r8
  __int64 v3; // r9
  float v4; // xmm0_4

  v2 = 0LL;
  *a2 = 0.0;
  if ( *((_DWORD *)this + 19) )
  {
    v3 = *((_QWORD *)this + 12);
    do
    {
      v4 = *(float *)(v3 + 4 * v2);
      if ( v4 > *a2 )
        *a2 = v4;
      v2 = (unsigned int)(v2 + 1);
    }
    while ( (unsigned int)v2 < *((_DWORD *)this + 19) );
  }
  return 0LL;
}
