/*
 * XREFs of ??_GJointResize@@UEAAPEAXI@Z @ 0x1803CF720
 * Callers:
 *     ??_EJointResize@@WBI@EAAPEAXI@Z @ 0x1800C1180 (--_EJointResize@@WBI@EAAPEAXI@Z.c)
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x180087AB0 (--3@YAXPEAX@Z.c)
 *     ??1JointResize@@UEAA@XZ @ 0x1803CF3DC (--1JointResize@@UEAA@XZ.c)
 */

JointResize *__fastcall JointResize::`scalar deleting destructor'(JointResize *this, char a2)
{
  JointResize::~JointResize(this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
